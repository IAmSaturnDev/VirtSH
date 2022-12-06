from googlesearch import search

query = input("Search: ")

print()

for i in search(query, tld="co.in", num=20, stop=20, pause=2):
    print(i)