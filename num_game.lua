local number = math.random(0,35)
local answer
local guesses = 0
print("There was a random number generated in a range of 0 to 35")
print("Entering something thats not a number breaks the program")

while true do
    guesses = guesses + 1
    answer = io.read("n")

    if answer == number then
        print("You got the number in " .. guesses .. " guesses!")
        break
    else
        print("Incorrect")
        print()
    end
    
end