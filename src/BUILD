cc_library(
    name = "hello-lib",
    srcs = ["hello.cpp"],
    hdrs = ["hello.h"],
    deps = ["@eigen3//:eigen3"]
)

cc_binary(
    name = "hello",
    srcs = ["main.cpp"],
    copts = [],
    deps = [":hello-lib"],
    visibility = ["//visibility:public"]
)