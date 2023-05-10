"""
Provides functions for loading third party modules and initiailzing where
applicable
"""

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

def load_thirdparty_libraries():
    """
    Retrieves and builds the third party libraries
    """
    http_archive(
        name = "thirdparty_glfw3_3_8",
        urls = ["https://github.com/glfw/glfw/releases/download/3.3.8/glfw-3.3.8.zip"],
        build_file = "//thirdparty/glfw:glfw3_3_8.BUILD",
        strip_prefix = "glfw-3.3.8",
    )
