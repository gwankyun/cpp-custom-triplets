# cmake版本
cmake_minimum_required(VERSION 4.1)

# 項目名
project(cpp_custom_triplets LANGUAGES CXX) # 指定C++可以跳過C編譯器檢測

# 查找兩個庫
find_package(fmt CONFIG REQUIRED)
find_package(Catch2 CONFIG REQUIRED)

# 添加可執行程序
add_executable(main)
target_sources(main
  PRIVATE
    src/main.cpp
)
target_link_libraries(main PRIVATE fmt::fmt Catch2::Catch2)

# 結合CTest和Catch2庫測試
include(CTest)
include(Catch)
catch_discover_tests(main)
