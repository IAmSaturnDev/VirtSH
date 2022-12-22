while true do
    io.write("Choose an option: (happy, neutral, binary, exit): ")
    local choice = io.read()

    if choice == "happy" then
        local sentence = io.read()

        io.write("\n")
        io.write("    " .. tostring(sentence), "\n")
        io.write("   /\n")
        io.write("^ ^\n")
        io.write("\n")
    end

    if choice == "neutral" then
        local sentence = io.read()

        io.write("\n")
        io.write("    " .. tostring(sentence), "\n")
        io.write("   /\n")
        io.write("- -\n")
        io.write("\n")
    end

    if choice == "binary" then
        local sentence = io.read()

        io.write("\n")
        io.write("    " .. tostring(sentence), "\n")
        io.write("   /\n")
        io.write("0 1\n")
        io.write("\n")
    end

    if choice == "exit" then
        break
    end
end