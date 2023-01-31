cmake_minimum_required(VERSION 3.9)
project(cmake_template_main)

set(SOURCES
        main.cpp
        )

add_executable(cmake_template_main ${SOURCES})

target_compile_features(cmake_template_main PUBLIC cxx_std_17)
target_include_directories(cmake_template_main PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../include/)
target_link_libraries(cmake_template_main
        PUBLIC
        cmake_template::libA
        cmake_template::headerOnlyLib
        )
