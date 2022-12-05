io.write("What city do you want the weather for? ")
local city = io.read()

os.execute("curl wttr.in/ string.format(city))")