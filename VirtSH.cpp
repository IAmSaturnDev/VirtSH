#include <iostream>
#include <stdlib.h>

void functions() {
    std::cout << "Commands: help(how you got here), weather, hi";
    std::cout << "\nNotice: All commands are lower cased!";
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
            system("python3 weather.py");
        }

        if (in == "search") {

        }

        if (in == "lua") {
            std::cout << "C++ ❤️  Lua\n";
        }

        if (in == "python") {
            std::cout << "C++ ❤️  Python\n";
        }

        if (in == "exit" || in == "bye") {
            std::cout << "\n";
            std::cout << "     Bye, user!\n";
            std::cout << "   /\n";
            std::cout << "^ ^\n";
            std::cout << "\n";

            break;
        }

        if (in == "hi" || in == "hello") {
            std::cout << "\n";
            std::cout << "     Hello, user!\n";
            std::cout << "   /\n";
            std::cout << "^ ^\n";
            std::cout << "\n";
        }

        if (in == "sh") {
            system("lua sh.lua");
        }

        
    }

}
