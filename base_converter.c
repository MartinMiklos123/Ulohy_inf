#pragma clang diagnostic push
#pragma ide diagnostic ignored "cert-err34-c"
#include <stdio.h>
#include <math.h>


int getLength(const char num[]){
    int i = 0;
    while(num[i] != '\0'){
        i++;
    }
    return i;
}


void convertToDif(int base2, int num){
    int number = num;
    printf("DECIMAL VALUE : %i\n", number);
    while(1){
        int temp = number % base2;
        number /= base2;
        printf("%i", temp);
        if (number < base2){
            printf("%i", number);
            break;

        }
    }

}

int convertToDecimal(int base, const char num[]){
    int finalNumber = 0;
    int k = 0;
    if(base != 10){
        for(int i = getLength(num) - 1; i >= 0; i--){
            int currentNumber = num[i] - '0';
            if(currentNumber >= base){
                printf("Invalid conversion");
                return 0;
            }
            else{
                finalNumber += currentNumber * pow(base, k);
                k++;
            }

        }

    }

    return finalNumber;
}

struct conversion{
    int base1;
    int base2;
    char convertNumber[100];

};

int main() {

    struct conversion c;

    printf("Enter a base you want to convert FROM:\n");
    scanf("%i", &c.base1);
    printf("Enter the number you want to convert:\n");
    scanf("%s", c.convertNumber);
    printf("Enter a base you want to convert TO:\n");
    scanf("%i", &c.base2);

    int n = convertToDecimal(c.base1, c.convertNumber);
    convertToDif(c.base2, n);


    return 0;
}

#pragma clang diagnostic pop
