# roo_icons
Collection of icons for use with the [roo_display](https://github.com/dejwk/roo_display) library. Icons are coming from Google's open-source [material icons collection](https://fonts.google.com/icons?icon.set=Material+Icons), used in Android and other Google products.

Small sample:

![img1](https://raw.githubusercontent.com/dejwk/roo_display/master/doc/images/img29.png)

The collection contains over 34000 icon files, and may take a few minutes to compile.

## Host emulation

Host builds use the roo_testing 2.0 Arduino ESP32 profile. With Bazelisk 1.21
or newer, a plain command defaults to that profile and prints a notice:

    bazel test ...
    bazel test ... --config=asan
    bazel test ... --config=roo_testing_arduino_esp32

The files under .roo_testing/bazelrc/esp32 are vendored from roo_testing;
follow their canonical-source headers when refreshing them.
