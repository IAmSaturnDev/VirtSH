#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <string.h>

void functions() {
    std::cout << "Commands: Help(how you got here), Weather";
    std::cout << "\n";
    
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
            system("lua weather.lua");
        }

        if (in == "search") {

        }

        if (in == "lua") {
            std::cout << "C++ ❤️ Lua\n";
        }

        if (in == "exit") {
            break;
        }
    }

}
