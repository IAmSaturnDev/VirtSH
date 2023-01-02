-- Quiz game!
print("WARNING THIS GAME IS CASE SENSITIVE, Look closeley!")


while true do
    io.write("Choose a gamemode 1, 2 or type help to see what the gamemodes are, or type exit. ")
    local gm = io.read()

    if gm == "help" then
        print("Gamemode 1 is code, 2 is geography")
    end

    if gm == "exit" then
        break
    end

    if gm == "1" then
        while true do
            print("Do you want to exit? (y/n)")
            local exit = io.read()

            if exit == "y" then
                break
            end
            
            local question = math.random(1, 3)

            if question == 1 then
                print("What was the 'first' high level programming language")
                print("Fortran, C++, Python")
                local ans = io.read()

                if ans == "Fortran" then
                    print("Correct")
                end

                if ans ~= "Fortran" then
                    print("Incorrect!")
                end
            end

            if question == 2 then
                print("Which one is the slowest? I did a test so if these are inacurate please tell me.")
                print("Java, C++, Python")
                local ans = io.read()

                if ans == "Java" then
                    print("Correct")
                end

                if ans ~= "Java" then
                    print("Incorrect!")
                end
            end

            if question == 3 then
                print("What is the main programming language of VirtSH?")
                print("Lua, C++, Python")
                local ans = io.read()

                if ans == "C++" then
                    print("Correct")
                end

                if ans ~= "C++" then
                    print("Incorrect!")
                end
            end
        end

        if gm == "2" then
            while true do
                print("Do you want to exit? (y/n)")
                local exit = io.read()

                if exit == "y" then
                    break
                end
                
                local question = math.random(1, 3)

                if question == 1 then
                    print("What is the smallest country?")
                    print("Vatican City, Andorra Monaco")
                    local ans = io.read()

                    if ans == "Vatican City" then
                        print("Correcto!")
                    end

                    if ans ~= "Vatican City" then
                        print("Your not correct")
                    end
                end

                if question == 2 then
                    print("True or false, Tokyo has more population than Canada")

                    local ans = io.read()

                    if ans == "True" then
                        print("Correcto!")
                    end

                    if ans ~= "False" then
                        print("Your not correct")
                    end
                end

                if question == 3 then
                    print("Which country has highest obisity rate?")
                    print("USA, Japan, Nauru")
                    local ans = io.read()

                    if ans == "Nauru" then
                        print("Correcto!")
                    end
                    
                    if ans == "Japan" then
                        print("Japan is 7th in LOWEST obisity rate, Incorrect")
                    end

                    if ans == "USA" then
                        print("I used to think this too lol, Incorrect")
                    end
                end

            end
        end
    end
end