# CMakeLists.txt
cmake_minimum_required(VERSION 3.10)
project(HelloProject)

# 添加头文件路径
include_directories(src)

# 创建主程序
add_executable(hello_test src/hello.c test/test_hello.c)

# 添加测试
enable_testing()
add_test(NAME test_hello COMMAND hello_test)
