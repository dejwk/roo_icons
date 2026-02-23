load("@rules_cc//cc:cc_library.bzl", "cc_library")
load("@rules_cc//cc:cc_test.bzl", "cc_test")

cc_library(
    name = "roo_icons",
    srcs = glob(
        [
            "src/**/*.cpp",
            "src/**/*.h",
        ],
        exclude = ["test/**"],
    ),
    includes = [
        "src",
    ],
    visibility = ["//visibility:public"],
    deps = [
        "@roo_display",
    ],
)

cc_test(
    name = "roo_icons_test",
    srcs = [
        "test/roo_icons_test.cpp",
    ],
    linkstatic = 1,
    deps = [
        ":roo_icons",
        "@roo_testing//:arduino_gtest_main",
    ],
)
