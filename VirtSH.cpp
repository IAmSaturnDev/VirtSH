#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <string.h>

void functions() {

}

int main() {
    std::cout << "\n";
    std::cout << "     Hello, world!\n";
    std::cout << "   /\n";
    std::cout << "^ ^\n";
    std::cout << "\n";

    while (true) {
        std::string in;
        std::cout << "VirtSH $ ";
        std::cin >> in;

        if (in == "help") {
            functions();
        }

        if (in == "weather") {
            system("python3 weather.py");
        }
    }

}
