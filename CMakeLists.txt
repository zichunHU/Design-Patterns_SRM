cmake_minimum_required(VERSION 3.10)
# 指定CMake的最低版本要求

project(Design_Patterns)
# 定义项目名称

set(CMAKE_CXX_STANDARD 17)

include_directories(include)
# 指定包含头文件的目录

# 生成可执行文件 Design-Patterns
add_executable(Design_Patterns
        src/main.cpp
        src/FactoryManager.cpp
        src/Product.cpp
        src/Strategy.cpp
)
# 定义要编译的源文件
