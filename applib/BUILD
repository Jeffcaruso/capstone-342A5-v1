load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
  name = "APPLib",
  visibility = ["//visibility:public"],
  hdrs = glob(["**/*.h"]),
  srcs = glob(["*.cpp"]),  # can add other files if needed. But don't want building.cpp! *See description*
  deps = ["@bazel_tools//tools/cpp/runfiles"],
)

#data = ["data/maze0.txt", "data/maze1.txt", "data/maze2.txt", "data/maze3.txt"],
#or
#  data = ["//data:maze0.txt", "//data:maze1.txt", "//data:maze2.txt", "//data:maze3.txt"],

# Description
# including building.cpp will break this becuase google test wants to be have the main method.
# your main method will not meet their expectations, and testing will not work properly.

# So, note this for both not including building.cpp in sources here,
    # and any of your other files where you put a main method.