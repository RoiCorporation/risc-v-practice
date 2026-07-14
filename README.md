# RISC-V practice repository
Repository with practice exercises for the RISC-V ISA.



## 🐳 Build the image and run the Docker container
1. Build the image defined in the [Dockerfile](./Dockerfile).
```
docker build -t risc-v-image:latest .
```

2. Start a container with that image and give it access to the current folder
at the ```practice_exercises``` directory.
```
docker run -it --name risc-v-container -v ./practice_exercises:/practice_exercises risc-v-image
```

3. Inside the container, move to the folder of the particular exercise you want
to test, compile and link the .c and .s files using the
[**RISC-V GNU Compiler Toolchain**](https://github.com/riscv-collab/riscv-gnu-toolchain)
and then run the program with the
[**QEMU RISC-V CPU**](https://www.qemu.org/docs/master/system/target-riscv.html)
emulator. Here's an example of this workflow for the integer divider exercise.
```
riscv64-linux-gnu-gcc -march=rv64gc -mabi=lp64d test.c integer_divider.s -o divider
qemu-riscv64 -L /usr/riscv64-linux-gnu ./divider
```
