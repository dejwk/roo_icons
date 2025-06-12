Import('env')
from os.path import join, realpath

for item in env.get("CPPDEFINES", []):
    is_esp32 = False
    if item == "ESP32":
        is_esp32 = True

    if item == "ARDUINO_ESP32C3_DEV":
        is_esp32 = False
        break

if is_esp32:
    env.Replace(SRC_FILTER=["-<*>"])
    env.Append(LIBPATH=[realpath("src/esp32")])
    env.Append(LIBS=["-lroo_icons"])
