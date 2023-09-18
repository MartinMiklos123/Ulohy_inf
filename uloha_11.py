while True:
    try:
        n1 = int(input("Zadaj prvé číslo: "))
        n2 = int(input("Zadaj druhé číslo: "))
        break

    except ValueError:
        print("Zadaj správne číslo")



vysledok = n1 + n2

print(f"{n1} + {n2} = {vysledok}")