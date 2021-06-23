genrule(
    name = "gendoc",
    srcs = ["API.md"],
    outs = ["API.zip"],
    visibility = ["//visibility:public"],
    cmd = """echo `date` > date.txt &&
        zip $@ date.txt API.md"""
)