cmake_minimum_required(VERSION 3.9)
project(cmake_template)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

option(cmake_template_enable_testing "Enable testing of ${PROJECT_NAME}" ON)

add_subdirectory(src)
add_subdirectory(src/libA)
add_subdirectory(include/headerOnlyLib)

## generate docs
# only do these if this is the main project
message(STATUS "CMAKE_PROJECT_NAME: ${CMAKE_PROJECT_NAME}, PROJECT_NAME: ${PROJECT_NAME}")
if (CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
    # ensure -std=c++xx instead of -std=g__xx
    set(CMAKE_CXX_EXTENSIONS OFF)
    # support folders in IDE`s
    set_property(GLOBAL PROPERTY USE_FOLDERS ON)
    # generate docs
    message(STATUS "Generating docs")
    add_subdirectory(docs)

    if(cmake_template_enable_testing)
        # will enable testing and set a BUILD_TESTING option so users can turn testing on and off
        # (along with a few other things)
        include(CTest)
        add_subdirectory(extern/googletest)
        include(GoogleTest)
        add_subdirectory(test)
    endif()
endif()