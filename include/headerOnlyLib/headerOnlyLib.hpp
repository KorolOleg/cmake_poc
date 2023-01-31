#pragma once
#include <iostream>
namespace cmake_template::header_only_lib {
    /**
     * https://www.doxygen.nl/manual/docblocks.html
     */
    inline void about() {
        std::cout << "headerOnlyLib\n";
    }
}