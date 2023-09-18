def pocet_zrniek(n):
    zrnko = 1
    for i in range(1, n):
        zrnko *= 2

    pocet_gramov = zrnko / 50

    pocet_ton = pocet_gramov / 1000000

    return zrnko, pocet_ton





def main():
    pocet_z = (pocet_zrniek(int(input("Zadaj poličko šachovnice: "))))
    print(pocet_z)






main()




