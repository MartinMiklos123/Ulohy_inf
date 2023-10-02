n = int(input("Enter a number: "))

def main(x,sum = 0, i = 0 ):
    if i > len(str(x)) - 1:
        print("sučet je: {}".format(sum))
        return
    string = str(x)
    print(string[i])
    main(x, sum=sum + int(string[i]), i=i + 1)



if __name__ == "__main__":
    main(n)
