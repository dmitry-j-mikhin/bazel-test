set -ex

#bazel build --config=linux_arm64_musl //:hello_world
#bazel build --config=linux_arm64_glibc //:hello_world
#bazel build --config=linux_amd64_musl //:hello_world
#bazel build --config=linux_amd64_glibc //:hello_world

reset
bazel build --config=linux_amd64_glibc -c dbg //:hello_world_bin
