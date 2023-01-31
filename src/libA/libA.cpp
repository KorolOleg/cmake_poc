#include <libA.hpp>
#include <iostream>


namespace cmake_template::libA {
    void about() {
        std::cout << "libA\n";
    }
    int getNumber() {
        return 1;
    }
}