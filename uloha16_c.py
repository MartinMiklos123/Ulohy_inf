n = int(input("Enter n: "))


def main(q):
    string = ""
    for i in range(1, q + 1):
        string += "*"*i
        string += " "
    print(string)





if __name__ == "__main__":
    main(n)



