import os

print("NOTICE: All projects will go into the /tmp folder!")
project_name = input("What is the name of the project you want to create? ")
os.mkdir(f"/tmp/{project_name}")