#pragma clang diagnostic push
#pragma ide diagnostic ignored "cert-err34-c"
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdint.h>


#define MAX_SIZE 100
#define TRUE 1


int getLength(const char num[]){
    int i = 0;
    while(num[i] != '\0'){
        i++;
    }
    return i;
}


void convertToDif(int base2, int num, int base1){
    printf("DECIMAL VALUE = %i \n", num);
    int number = num;
    int digits[MAX_SIZE];
    int i = 0;

    while(TRUE){
        int temp = number % base2;

        number /= base2;
        digits[i] = temp;

        i++;

        if (number < base2){
            digits[i] = number;
            break;
        }
    }

    printf("CONVERTED FROM BASE %i TO BASE %i = ", base1, base2);

    for(int k = i; k >= 0; k--){
        if(digits[k] >= 10){
            printf("%c", 55 + digits[k]);
        }
        else{
            printf("%i", digits[k]);
        }
    }

}

int64_t convertToDecimal(int base, const char num[]){
    int64_t finalNumber = 0;
    int k = 0;

    for(int i = getLength(num) - 1; i >= 0; i--){
        int currentNumber;
        if ((isalpha(num[i]))){
            currentNumber = num[i] - '0' - 7;
        }else{
            currentNumber = num[i] - '0';
        }

        if(currentNumber >= base){
            printf("Invalid conversion");
            return 0;
        }
        else{
            finalNumber += currentNumber * pow(base, k);
            k++;
            }

        }

    return finalNumber;
}

struct conversion{
    int base1;
    int base2;
    char convertNumber[MAX_SIZE];

};

int main() {
    printf("%c\n", 60);
    struct conversion c;

    printf("Enter a base you want to convert FROM:\n");
    scanf("%i", &c.base1);
    printf("Enter the number you want to convert:\n");
    scanf("%s", c.convertNumber);
    printf("Enter a base you want to convert TO:\n");
    scanf("%i", &c.base2);

    int64_t n = convertToDecimal(c.base1, c.convertNumber);
    convertToDif(c.base2, n, c.base1);

    return 0;
}

#pragma clang diagnostic pop
