load("@rules_cc//cc:defs.bzl", "cc_binary")

cc_binary(
    name = "program1",
    srcs = ["program1.cc"],
    deps = ["@gtest//:main",
			"//lib:function1"],
	visibility = ["//visibility:public"],
)
