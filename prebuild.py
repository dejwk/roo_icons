Import('env')
from os.path import join, realpath

for item in env.get("CPPDEFINES", []):
    if item == "ESP32":
        env.Replace(SRC_FILTER=["-<*>"])
        env.Append(LIBPATH=[realpath("src/esp32")])
        env.Append(LIBS=["-lroo_icons"])
        break
