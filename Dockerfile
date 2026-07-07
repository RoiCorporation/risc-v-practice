# syntax=docker/dockerfile:1
FROM ubuntu:latest

# Install all necessary dependencies
RUN apt-get update
RUN apt-get install -y autoconf automake autotools-dev curl python3 python3-pip \
    python3-tomli libmpc-dev libmpfr-dev libgmp-dev gawk build-essential bison flex \
    texinfo gperf libtool patchutils bc zlib1g-dev libexpat-dev ninja-build git \
    cmake libglib2.0-dev libslirp-dev libncurses-dev gcc-riscv64-linux-gnu \
    qemu-system qemu-user-binfmt

# Move to the appropriate working directory
WORKDIR /practice_exercises
