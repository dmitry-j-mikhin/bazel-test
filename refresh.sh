set -ex

bazel run @hedron_compile_commands//:refresh_all -- --config=linux_amd64_glibc -c dbg
