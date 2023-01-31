cmake_minimum_required(VERSION 3.9)
project(cmake_template_libA)

set(SOURCES
        libA.cpp
        )

add_library(cmake_template_libA ${SOURCES})
add_library(cmake_template::libA ALIAS cmake_template_libA)


target_compile_features(cmake_template_libA PUBLIC cxx_std_17)
target_include_directories(cmake_template_libA PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../../include/libA)
