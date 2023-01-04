io.write("You need the curl command installed in order to use this part of VirtSH\n")
io.write("Enter a city: ")
local city = io.read()
os.execute("curl wttr.in/" .. city)