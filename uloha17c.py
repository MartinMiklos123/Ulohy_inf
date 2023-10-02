n0 = int(input("Zadaj od: "))
n1 = int(input("Zadaj do: "))

for i in range(n0, n1 + 1):
    for power in range(1,5):
        print(i ** power, end=" ")
    print()

