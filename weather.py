import os


city = input("What city do you want the weather for?")

os.system(f"curl https://wttr.in/{city}")