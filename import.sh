#!/bin/bash

source_dir_master=import/material-design-icons-master
source_dir_3_0_2=import/material-design-icons-3.0.2
importer_dir=import/roo_display_image_importer-main
icon_dir=`pwd`

sizes="18 24 36 48"

if [ ! -d ${source_dir_master} ]
then
  echo "Fetching the newest material icons..."
  mkdir -p import
  cd import
  rm master.zip
  wget "https://github.com/google/material-design-icons/archive/master.zip"
  unzip master.zip 'material-design-icons-master/png/*/1x/*_black_*.png'
  rm master.zip
  echo "Fetching the newest material icons done."
  cd ${icon_dir}
fi

if [ ! -d ${source_dir_3_0_2} ]
then
  echo "Fetching material icons 3.0.2 ..."
  mkdir -p import
  cd import
  wget "https://github.com/google/material-design-icons/archive/3.0.2.zip"
  unzip 3.0.2.zip 'material-design-icons-3.0.2/*/1x_web/*'
  rm 3.0.2.zip
  cd ${icon_dir}
  echo "Fetching material icons 3.0.2 done."
fi

if [ ! -d ${importer_dir} ]
then
  echo "Fetching the image importer..."
  mkdir -p import
  cd import
  rm main.zip
  wget "https://github.com/dejwk/roo_display_image_importer/archive/main.zip"
  unzip main.zip > /dev/null
  rm main.zip
  cd ${icon_dir}
  echo "Fetching the image importer done."
fi

mkdir -p import
mkdir -p import/png

categories=`ls ${source_dir_master}/png`

#categories=`find ${source_dir} -wholename "*/1x_web/*black_*" -printf "%h\n" | sort -u | sed 's/import\/material-design-icons-master\///' | sed 's/\/1x_web//'`
echo "Categories found: "
echo ${categories}

function copy_pngs_3 {
  echo "Copying PNG files from 3.0.2..."

  for size in ${sizes}; do
    echo "size: ${size}"
    mkdir -p import/png/filled/${size}
    mkdir -p import/png/outlined/${size}
    for category in ${categories}; do
      echo "category: ${category}"
      # Copy the 3.0.2 filled icons.
      mkdir -p import/png/filled/${size}/${category}
      for i in `find ${source_dir_3_0_2}/${category}/1x_web/*black_${size}dp* -printf "%f\n"  | grep -v '_outlined' | grep -v '_white'`; do
        dest=`echo $i | sed "s/_black_${size}dp//g" | sed "s/filled_//" | sed "s/ic_/ic_filled_${size}_${category}_/"`
        cp ${source_dir_3_0_2}/${category}/1x_web/$i import/png/filled/${size}/${category}/${dest}
      done
      # Copy the 3.0.2 outlined icons.
      mkdir -p import/png/outlined/${size}/${category}
      for i in `find ${source_dir_3_0_2}/${category}/1x_web/*outline_black_${size}dp* -printf "%f\n" | grep -v '_white'`; do
        dest=`echo $i | sed "s/_outline_black_${size}dp//g" | sed "s/ic_/ic_outlined_${size}_${category}_/"`
        cp ${source_dir_3_0_2}/${category}/1x_web/$i import/png/outlined/${size}/${category}/${dest}
      done
    done
  done

  echo "Copying PNG files done."
}

function copy_pngs_master_by_family {
  family=$1
  subdir=$2
  prefix=$3

  echo "Family ${family}: copying PNG files..."

  for size in ${sizes}; do
    echo "size: ${size}"
    mkdir -p import/png/${family}/${size}
    for category in ${categories}; do
      echo "category: ${category}"
      mkdir -p import/png/${family}/${size}/${category}
      # Copy the 4.0.0+ icons.
      icons=`ls ${source_dir_master}/png/${category}`
      for i in ${icons}; do
        src=${source_dir_master}/png/${category}/$i/${subdir}/${size}dp/1x/${prefix}_${i}_black_${size}dp.png
        dst=import/png/${family}/${size}/${category}/ic_${family}_${size}_${category}_${i}.png
        cp ${src} ${dst} >& /dev/null
      done
    done
  done

  echo "Family ${family}: Copying PNG files done."
}

function generate_family {
  family=$1
  subdir=$2
  prefix=$3

  echo "Family ${family}: copying PNG files..."

  echo "Family ${family}: Generating C++ files..."

  mkdir -p src/roo_icons

  for size in ${sizes}; do
    echo "size: ${size}"
    mkdir -p src/roo_icons/${family}/${size}
    for category in ${categories}; do
      echo "category: ${category}"
      mkdir -p src/roo_icons/${family}/${size}/${category}
      files=`find import/png/${family}/${size}/${category} -name "*.png" -printf "%f\n" | sort | sed -e ':a;N;s/\n/ /;ba'`
      (cd ${importer_dir}; ./gradlew run --args="-s PROGMEM -o ${category} -e ALPHA4 -c RLE --fg=color::Black --autocrop --input-dir=${icon_dir}/import/png/${family}/${size}/${category} --output-dir=${icon_dir}/src/roo_icons/${family}/${size} ${files}")
    done
  done

  # Generate 'all size' headers.
  for category in ${categories}; do
    output=src/roo_icons/${family}/${category}.h
    rm ${output}
    touch ${output}
    for size in ${sizes}; do
      echo "#include \"roo_icons/${family}/${size}/${category}.h\"" >> ${output}
    done
  done

  echo "Family ${family}: generating C++ files done."
}

copy_pngs_3

copy_pngs_master_by_family "filled" "materialicons" "baseline"
copy_pngs_master_by_family "round" "materialiconsround" "round"
copy_pngs_master_by_family "outlined" "materialiconsoutlined" "outline"
copy_pngs_master_by_family "sharp" "materialiconssharp" "sharp"

generate_family "filled" "materialicons" "baseline"
generate_family "round" "materialiconsround" "round"
generate_family "outlined" "materialiconsoutlined" "outline"
generate_family "sharp" "materialiconssharp" "sharp"
