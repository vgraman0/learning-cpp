#include <iostream>
#include <map>

int main() {
    // Check the macro value
    std::cout << "C++ Standard: " << __cplusplus << std::endl;

    // C++17 Structured Bindings test
    std::map<int, std::string> m = {{1, "C++17"}};
    for (auto const& [key, value] : m) {
        std::cout << value << " is working!" << std::endl;
    }
    return 0;
}