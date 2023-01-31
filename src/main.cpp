#include <headerOnlyLib/headerOnlyLib.hpp>
#include <libA/libA.hpp>
#include <cmake_template.hpp>

namespace cmake_template {
    void about() {
        std::cout << "cmake_template\n";
    }
}

int main() {
    cmake_template::header_only_lib::about();
    cmake_template::libA::about();
    cmake_template::about();
    return 0;
}