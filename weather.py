from os import system

city = input("Enter a city: ")
system(f"curl https://wttr.in/{city}")