#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <cmath>
#include "games.hpp"

// randomly added comment NONE OF YOUR CONSERN! :D

void functions() {
    std::cout << "Commands: help(how you got here), weather, hi or hello, bye or exit, search, sh, count, calc, say,\nlist, license, games";
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

    double a = 0;
    double b = 0;
    double c = 0;
    double x = 0;
    double y = 0;
    double z = 0;

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

        if (in == "shell") {
            std::cout << "Enter a shell: zsh bash or sh: ";
            std::string choice;
            std::cin >> choice;

            if (choice == "sh") {
                system("sh");
            }

            if (choice == "bash") {
                system("bash");
            }

            if (choice == "zsh") {
                system("zsh");
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
            while (true) {
                std::cout << "Choose an option: exit, +, -, *, /, %, ^, sqrt, abs, cos, sin, var\n";
                std::string option;
                std::cin >> option;

                if (option == "exit") 
                {
                    break;
                }

                if (option == "+")
                {
                    double num1;
                    double num2;
                    std::cout << "Num1: ";
                    std::cin >> num1;
                    std::cout << "Num2: ";
                    std::cin >> num2;

                    std::cout << num1 + num2 << "\n";
                }

                if (option == "-")
                {
                    double num1;
                    double num2;
                    std::cout << "Num1: ";
                    std::cin >> num1;
                    std::cout << "Num2: ";
                    std::cin >> num2;

                    std::cout << num1 - num2 << "\n";
                }

                if (option == "*")
                {
                    double num1;
                    double num2;
                    std::cout << "Num1: ";
                    std::cin >> num1;
                    std::cout << "Num2: ";
                    std::cin >> num2;

                    std::cout << num1 * num2 << "\n";
                }

                if (option == "/")
                {
                    double num1;
                    double num2;
                    std::cout << "Num1: ";
                    std::cin >> num1;
                    std::cout << "Num2: ";
                    std::cin >> num2;

                    std::cout << num1 / num2 << "\n";
                }

                if (option == "%")
                {
                    int num1;
                    int num2;
                    std::cout << "Num1: ";
                    std::cin >> num1;
                    std::cout << "Num2: ";
                    std::cin >> num2;

                    std::cout << num1 % num2 << "\n";
                }

                if (option == "^") 
                {
                    double num1;
                    double num2;
                    std::cout << "Num1: ";
                    std::cin >> num1;
                    std::cout << "Num2: ";
                    std::cin >> num2;
                    

                    std::cout << pow(num1, num2) << "\n";
                }

                if (option == "sqrt") 
                {
                    double num;

                    std::cout << "Num: ";
                    std::cin >> num;

                    std::cout << sqrt(num) << "\n";
                }

                if (option == "abs") 
                {
                    double num;
                    std::cout << "Num: ";
                    std::cin >> num;

                    std::cout << abs(num) << "\n";
                }

                if (option == "sin") 
                {
                    std::cout << "Enter a option: sin sinlf\n";
                    std::string option1;
                    std::cin >> option1;

                    if (option1 == "sin") 
                    {
                        double num;
                        std::cout << "Num: ";
                        std::cin >> num;
                        std::cout << sin(num) << "\n";
                    }

                    if (option1 == "sinl")
                    {
                        double num;
                        std::cout << "Num: ";
                        std::cin >> num;
                        std::cout << sinl(num) << "\n";
                    }
                }

                if (option == "cos")
                {
                    std::cout << "Enter a option: cos cosl\n";
                    std::string option1;
                    std::cin >> option1;

                    if (option1 == "cos")
                    {
                        double num;
                        std::cout << "Num: ";
                        std::cin >> num;
                        std::cout << cos(num) << "\n";
                    }

                    if (option1 == "cosl")
                    {
                        double num;
                        std::cout << "Num: ";
                        std::cin >> num;
                        std::cout << cosl(num) << "\n";
                    }

                }

                if (option == "var") {
                    std::string opt;
                    std::cout << "You have 6 variables.\n";
                    std::cout << "They are a, b, c, x, y, z\n";
                    std::cout << "Do you want to 'edit' or do 'math' with them?\n";
                    std::cin >> opt;

                    if (opt == "edit") {
                        double num;
                        char var;
                        std::cout << "Enter a number: ";
                        std::cin >> num;
                        
                        std::cout << "Enter a variable (lowercase!): ";
                        std::cin >> var;

                        if (var == 'a') 
                        {
                            a = num;
                        }

                        if (var == 'b')
                        {
                            b = num;
                        }

                        if (var == 'c')
                        {
                            c = num;
                        }

                        if (var == 'x')
                        {
                            x = num;
                        }

                        if (var == 'y')
                        {
                            y = num;
                        }

                        if (var == 'z')
                        {
                            z = num;
                        }
                    }

                    if (opt == "math") {
                        std::cout << "Choose an option:  +, -, *, /, %, ^, sqrt\n";
                        std::string option;
                        std::cin >> option;


                        if (option == "+")
                        {
                            double num1 = 3;
                            double num2;

                            char var2;
                            std::cout << "Enter a variable (lowercase!): ";
                            std::cin >> var2;

                            if (var2 == 'a')
                            {
                                num1 = a;
                            }

                            if (var2 == 'b')
                            {
                                num1 = b;
                            }

                            if (var2 == 'c')
                            {
                                num1 = c;
                            }

                            if (var2 == 'x')
                            {
                                num1 = x;
                            }

                            if (var2 == 'y')
                            {
                                num1 = y;
                            }

                            if (var2 == 'z')
                            {
                                num1 = z;
                            }

                            std::cout << "Num2 (Num1 is the variable!): ";
                            std::cin >> num2;

                            std::cout << num1 + num2 << "\n";
                        }

                        if (option == "-")
                        {
                            double num1 = 3;
                            double num2;

                            char var2;
                            std::cout << "Enter a variable (lowercase!): ";
                            std::cin >> var2;

                            if (var2 == 'a')
                            {
                                num1 = a;
                            }

                            if (var2 == 'b')
                            {
                                num1 = b;
                            }

                            if (var2 == 'c')
                            {
                                num1 = c;
                            }

                            if (var2 == 'x')
                            {
                                num1 = x;
                            }

                            if (var2 == 'y')
                            {
                                num1 = y;
                            }

                            if (var2 == 'z')
                            {
                                num1 = z;
                            }

                            std::cout << "Num2 (Num1 is the variable!): ";
                            std::cin >> num2;

                            std::cout << num1 - num2 << "\n";
                        }

                        if (option == "*")
                        {
                            double num1 = 3;
                            double num2;

                            char var2;
                            std::cout << "Enter a variable (lowercase!): ";
                            std::cin >> var2;

                            if (var2 == 'a') 
                            {
                                num1 = a;
                            }
                            
                            if (var2 == 'b')
                            {
                                num1 = b;
                            }

                            if (var2 == 'c')
                            {
                                num1 = c;
                            }

                            if (var2 == 'x')
                            {
                                num1 = x;
                            }

                            if (var2 == 'y')
                            {
                                num1 = y;
                            }

                            if (var2 == 'z')
                            {
                                num1 = z;
                            }

            
                            std::cout << "Num2 (Num1 is the variable!): ";
                            std::cin >> num2;

                            std::cout << num1 * num2 << "\n";
                        }

                        if (option == "/")
                        {
                            double num1 = 3;
                            double num2;

                            char var2;
                            std::cout << "Enter a variable (lowercase!): ";
                            std::cin >> var2;

                            if (var2 == 'a')
                            {
                                num1 = a;
                            }

                            if (var2 == 'b')
                            {
                                num1 = b;
                            }

                            if (var2 == 'c')
                            {
                                num1 = c;
                            }

                            if (var2 == 'x')
                            {
                                num1 = x;
                            }

                            if (var2 == 'y')
                            {
                                num1 = y;
                            }

                            if (var2 == 'z')
                            {
                                num1 = z;
                            }

                            std::cout << "Num2 (Num1 is the variable!): ";
                            std::cin >> num2;

                            std::cout << num1 / num2 << "\n";
                        }

                        if (option == "%")
                        {
                            int num1;
                            int num2;

                            char var2;
                            std::cout << "Enter a variable (lowercase!): ";
                            std::cin >> var2;

                            if (var2 == 'a')
                            {
                                num1 = a;
                            }

                            if (var2 == 'b')
                            {
                                num1 = b;
                            }

                            if (var2 == 'c')
                            {
                                num1 = c;
                            }

                            if (var2 == 'x')
                            {
                                num1 = x;
                            }

                            if (var2 == 'y')
                            {
                                num1 = y;
                            }

                            if (var2 == 'z')
                            {
                                num1 = z;
                            }

                            std::cout << "Num2 (Num1 is the variable!): ";
                            std::cin >> num2;

                            std::cout << num1 % num2 << "\n";
                        }

                        if (option == "^")
                        {
                            double num1 = 3;
                            double num2;

                            char var2;
                            std::cout << "Enter a variable (lowercase!): ";
                            std::cin >> var2;

                            if (var2 == 'a')
                            {
                                num1 = a;
                            }

                            if (var2 == 'b')
                            {
                                num1 = b;
                            }

                            if (var2 == 'c')
                            {
                                num1 = c;
                            }

                            if (var2 == 'x')
                            {
                                num1 = x;
                            }

                            if (var2 == 'y')
                            {
                                num1 = y;
                            }

                            if (var2 == 'z')
                            {
                                num1 = z;
                            }

                            std::cout << "Num2 (Num1 is the variable!): ";
                            std::cin >> num2;

                            std::cout << pow(num2, num1) << "\n";
                        }

                        if (option == "sqrt")
                        {
                            double num1 = 3;

                            char var2;
                            std::cout << "Enter a variable (lowercase!): ";
                            std::cin >> var2;

                            if (var2 == 'a')
                            {
                                num1 = a;
                            }

                            if (var2 == 'b')
                            {
                                num1 = b;
                            }

                            if (var2 == 'c')
                            {
                                num1 = c;
                            }

                            if (var2 == 'x')
                            {
                                num1 = x;
                            }

                            if (var2 == 'y')
                            {
                                num1 = y;
                            }

                            if (var2 == 'z')
                            {
                                num1 = z;
                            }

                            std::cout << sqrt(num1) << "\n";
                        }
                        
                    }
                }


            }
        }

        if (in == "say") {
            system("lua ancsiisay.lua");
        }

        if (in == "list") {
            system("lua lists.lua");
        }

        if (in == "license") {
            std::cout << "\n";
            system("cat LICENSE.txt");
            std::cout << "\n";
        }

        if (in == "idiot") {
            std::cout << "\n";
            std::cout << "     Why you mean.\n";
            std::cout << "   /\n";
            std::cout << "- -\n";
            std::cout << "\n";
            break;
        }

        if (in == "glitch") {
            while (true) {
                std::cout << "OOOO I am a glitch!\n";
            }
        }

        if (in == "games") {
            std::cout << "The games are: quiz";
            std::string game;
            std::cin >> game;

            if (game == "quiz") {
                quiz();
            }
        }

        // easter egg :D

    }
    
    return 0; // :D
}
// This is my BIGGEST program EVER...
// only because of the calculator :|