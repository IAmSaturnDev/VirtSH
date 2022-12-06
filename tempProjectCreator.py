import os

print("NOTICE: All projects will go into the /tmp folder!")
project_name = input("What is the name of the project you want to create? ")
os.mkdir(f"/tmp/{project_name}")
os.system(f"touch /tmp/{project_name}/CREATED_BY_VIRTSH.txt ")
file = open(f"/tmp/{project_name}/CREATED_BY_VIRTSH.txt", "w+")
file.write("This is an automatically generated file, feel free to delete it, its just to know that this is your generated project.")
file.close()