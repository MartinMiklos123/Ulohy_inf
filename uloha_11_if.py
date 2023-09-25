january = 31
february = 28
march = 31
april = 30
may = 31
june = 30
july = 31
august = 31
september = 30
october = 31
november = 30
december = 31

months = ["January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November",
          "December"]
days = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]


def date(x):
    temp = 0
    for i in range(len(days)):
        if x > temp:                                                                                                # --> AK POCET DNI JE VACSIE AKO "temp", PRIDAME K TOMU POCET DNI V LISTE, tzv. days[i]
            temp += days[i]
            if x < temp:                                                                                            # --> SKONTROLUJE CI PO PRIDANI DNI DO "temp" JE ZADANY POCET DNI MENSI, AK HEJ NATRAFILI SME NA SPRAVNY MESIAC
                index = i                                                                                           # --> ULOZI CISLO MESIACA DO PREMENNEJ "index"
                result = x - (temp - days[i])                                                                       # --> VYPOCITA ZVYSOK DNI A ZAPISE DO "result"
                return months[index], result                                                                        # --> VRATI FUNKCIU SO SPRAVNYMI HODNOTAMI
            elif x == temp:                                                                                         # --> SKONTROLUJE CI POCET DNI ZADANYCH SA NEROVNA "temp", NAPRIKLAD PRI -->"*"
                return months[i], days[i]


def main():
    # OTESTUJ KOD S POUZITIM ASSERT:
    assert date(31) == ("January", 31)  #--> * tomto
    assert date(90) == ("March", 31)  # --> * a tomto
    assert date(183) == ("July", 2)
    assert date(270) == ("September", 27)

    # VYPIS SVOJE VLASTNE HODNOTY:
    n = int(input("Enter a number of days: "))
    my_date = date(n)
    print(f"the date is {my_date[0]} {my_date[1]}th")


if __name__ == "__main__":
    main()
