#!/bin/bash

# 确保脚本在正确的目录中执行
cd "$(dirname "$0")"

# 创建构建目录，如果已存在则不会报错
mkdir -p build

# 进入构建目录
cd build

# 运行CMake生成构建文件，指向Factory目录
cmake ../Factory

# 运行make进行编译
make

# 运行生成的可执行文件
./Design_Patterns
