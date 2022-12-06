#include <iostream>
#include <stdlib.h>
#include <unistd.h>

void functions() {
    std::cout << "Commands: help(how you got here), weather, hi or hello, bye or exit, search, projectsetup, tempclean, sh";
    std::cout << "\nNotice: All commands are lower cased!";
    std::cout << "\n";
    
}

int main() {
    int yeetfuels = 0;
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
            system("python3 search.py");
        }

        if (in == "lua") {
            std::cout << "C++ ❤️  Lua\n";
        }

        if (in == "python") {
            std::cout << "C++ ❤️  Python\n";
        }

        if (in == "exit" || in == "bye" || in == "Bye, world!") {
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
            std::cout << "Enter a shell: zsh bash or sh: ";
            std::string choice;
            std::cin >> choice;

            if (choice == "sh") {
                system("lua sh.lua");
            }

            if (choice == "bash") {
                system("lua bash.lua");
            }

            if (choice == "zsh") {
                system("lua zsh.lua");
            }
        }

        if (in == "yeetfuel") {
            std::cout << "You knew it :D\n";
            std::cout << "yeetfuel!!!!\n";
            yeetfuels++;
        }

        if (in == "C++") {
            std::cout << ":O\n";
        }
        
        if (in == "rush e") { std::cout << "Its a great song!\n"; }

        if (in == "Hello, world!") {
            system("echo Hello, world!");
        }

        if (in == "?") {
            std::cout << "\n";
            std::cout << "     You said ?... do you need a list of commands?\n";
            std::cout << "   /\n";
            std::cout << "^ ^\n";
            std::cout << "\n";

            std::cout << "(y/n)\n";
            std::string arg;
            std::cin >> arg;

            if (arg == "y") {
                functions();
            }

            if (arg == "n") {

            }

            if (arg == "?") {
                std::cout << "\n";
                std::cout << "     Do you know how to read or something?\n";
                std::cout << "   /\n";
                std::cout << "- -\n";
                std::cout << "\n";
            }



        }

        if (in == "projectsetup") {
            system("python3 tempProjectCreator.py");
        }

        if (in == "tempclean") {
            std::cout << "This will run as 'sudo' so you will have to enter your password.\n";
            system("sudo rm -rf /private/tmp/");
        }

        if (in == "about") {
            std::cout << "\n";
            std::cout << "     VirtSH is a virtual assistant succeeding IreSH. The development began on Dec 5 2022. For more check out the README!\n";
            std::cout << "   /\n";
            std::cout << "^ ^\n";
            std::cout << "\n";
        }

        if (in == "UwU") {
            std::cout << "\n";
            std::cout << "     Get out.\n";
            std::cout << "   /\n";
            std::cout << "- -\n";
            std::cout << "\n";
            usleep(3000000);

            std::cout << "\n";
            std::cout << "     Ok sorry\n";
            std::cout << "   /\n";
            std::cout << "^ ^\n";
            std::cout << "\n";
        }
    }

    return 0; // :D
}
