
x = int(input("Zadaj cislo: "))

def main(n):
    division = 1
    pi = 0
    loops = (n+1) // 2 if n % 2 == 0 else ((n+1) // 2) + 1

    for i in range(loops):
        result = (4/division - 4/(division + 2))
        print(division)
        pi += result
        division += 4
    print(pi)






main(x)

