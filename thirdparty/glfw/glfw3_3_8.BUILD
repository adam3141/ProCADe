load("@rules_foreign_cc//foreign_cc:defs.bzl", "cmake")

filegroup(
    name = "all_srcs",
    srcs = glob(["**"]),
    visibility = ["//visibility:public"],
)

cmake(
    name = "glfw3",
    lib_source = ":all_srcs",
    out_static_libs = ["libglfw3.a"],
    visibility = ["//visibility:public"],
)
