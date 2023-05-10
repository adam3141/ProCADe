workspace(name = "procade")

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

# Load Google Test framework
http_archive(
    name = "gtest",
    strip_prefix = "googletest-1.13.0",
    urls = ["https://github.com/google/googletest/archive/refs/tags/v1.13.0.tar.gz"],
)

# Loads in the foriegn_rules for builds requiring cmake and configure
http_archive(
    name = "rules_foreign_cc",
    # TODO: Get the latest sha256 value from a bazel debug message or the latest
    #       release on the releases page: https://github.com/bazelbuild/rules_foreign_cc/releases
    #
    sha256 = "4d53d4045d7b87c030d53a257f96117bc1aca3b29a7f0da07ff92aebfeadedbb",
    strip_prefix = "rules_foreign_cc-7fa1a1259bbc4fbceb4dc3a23ed520907b5d8d1d",
    url = "https://github.com/bazelbuild/rules_foreign_cc/archive/7fa1a1259bbc4fbceb4dc3a23ed520907b5d8d1d.tar.gz",
)

load("@rules_foreign_cc//foreign_cc:repositories.bzl", "rules_foreign_cc_dependencies")

rules_foreign_cc_dependencies()

# Load in the third party libraries
load("@//thirdparty:thirdparty.bzl", "load_thirdparty_libraries")

load_thirdparty_libraries()
