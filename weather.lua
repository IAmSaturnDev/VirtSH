io.write("You need the curl command installed in order to use this part of VirtSH\n")
io.write("Enter a city: ")
city = io.read()
os.execute("curl wttr.in/" .. city)