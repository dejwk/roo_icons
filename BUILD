cc_library(
    name = "roo_icons",
    visibility = ["//visibility:public"],
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
