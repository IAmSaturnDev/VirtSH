#include <iostream>
#include <stdlib.h>
#include <unistd.h>

void functions() {
    std::cout << "Commands: help(how you got here), weather, hi or hello, bye or exit, search, projectsetup, tempclean, sh, count, calc";
    std::cout << "\nNotice: All commands are lower cased! Upset some easter eggs! Hint: Check the source code!";
    std::cout << "\n";
    
}

int main() {
    int yeetfuels = 0;
    std::string WOW = "WOW THIS IS AN EASTER EGG!!!!";
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
            system("python3 search.py");
        }

        if (in == "lua") {
            std::cout << "C++ ❤️  Lua\n";
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
            std::cout << "You said yeetfuel " << yeetfuels << " times!\n";
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
            sleep(3);

            std::cout << "\n";
            std::cout << "     Ok sorry\n";
            std::cout << "   /\n";
            std::cout << "^ ^\n";
            std::cout << "\n";

            sleep(2);

            std::cout << "\n";
            std::cout << "     ...\n";
            std::cout << "   /\n";
            std::cout << "- -\n";
            std::cout << "\n";

            sleep(2);

            std::cout << "\n";
            std::cout << "     Ok your free to go\n";
            std::cout << "   /\n";
            std::cout << "^ ^\n";
            std::cout << "\n";
        }

        if (in == "UwUcat") {
            std::cout << "\n";
            std::cout << "     Get out.\n";
            std::cout << "   /\n";
            std::cout << "- -\n";
            std::cout << "\n";
            break;
        }

        if (in == "!") {
            std::cout << "!\n";
        }

        if (in == "B++") {
            std::cout << "I wonder what a type of a language that would be...\n";
        }

        if (in == "count") {
            std::cout << "Whats your favorite number? ";
            int num;
            std::cin >> num;
            
            for (int i = 0; i < num + 1; i++) {
                std::cout << i << "\n";
                sleep(1);
            }
        }

        if (in == "calc") {
            std::cout << "Choose an option: 1(+), 2(-), 3(*), 4(/), 5(%)\n";
            std::string option;
            std::cin >> option;

            if (option == "1") {
                double num1;
                double num2;
                std::cout << "Num1: ";
                std::cin >> num1;
                std::cout << "Num2: ";
                std::cin >> num2;

                std::cout << num1 + num2 << "\n";
            }

            if (option == "2") {
                double num1;
                double num2;
                std::cout << "Num1: ";
                std::cin >> num1;
                std::cout << "Num2: ";
                std::cin >> num2;

                std::cout << num1 - num2 << "\n";
            }

            if (option == "3") {
                double num1;
                double num2;
                std::cout << "Num1: ";
                std::cin >> num1;
                std::cout << "Num2: ";
                std::cin >> num2;

                std::cout << num1 * num2 << "\n";
            }

            if (option == "4") {
                double num1;
                double num2;
                std::cout << "Num1: ";
                std::cin >> num1;
                std::cout << "Num2: ";
                std::cin >> num2;

                std::cout << num1 / num2 << "\n";
            }

            if (option == "5") {
                int num1;
                int num2;
                std::cout << "Num1: ";
                std::cin >> num1;
                std::cout << "Num2: ";
                std::cin >> num2;

                std::cout << num1 % num2 << "\n";
            }
        }

        if (in == "kaimoji") {
            system("lua KaimojiSay.lua");
        }
    }
    
    return 0; // :D
}
// my projects are just getting bigger and bigger!
// sooo