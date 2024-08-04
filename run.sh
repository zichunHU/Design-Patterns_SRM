#!/bin/bash

# 创建构建目录，如果已存在则不会报错
mkdir -p build

# 进入构建目录
cd build

# 运行CMake生成构建文件
cmake ..

# 运行make进行编译
make

# 运行生成的可执行文件
./Design_Patterns