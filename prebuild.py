Import('env')
from os.path import join, realpath

board_mcu = env.get("BOARD_MCU", "")
is_esp32 = board_mcu in ["esp32", "esp32s2", "esp32s3"]

if is_esp32:
    env.Replace(SRC_FILTER=["-<*>"])
    env.Append(LIBPATH=[realpath("src/esp32")])
    env.Append(LIBS=["-lroo_icons"])
