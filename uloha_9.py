n = int(input("Zadaj pocet bajtov:"))
sucet = 1

for i in range(n):
    value = 256
    sucet *= value

sucet -= 1
print(sucet)