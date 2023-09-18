#include <stdio.h>

void Calculate(int n){
    printf("Celociselne delene 10: %i\n", n/10);
    printf("Zvysok: %i\n", n % 10);
    printf("\n");
    printf("Celociselne delene 100: %i\n", n / 100);
    printf("Zvysok: %i\n", n % 100);
    printf("\n");
    printf("Celociselne delene 1000: %i\n", n/1000);
    printf("Zvysok: %i\n", n % 1000);
    printf("\n");
    printf("Celociselne delene 10000: %i\n", n/10000);
    printf("Zvysok: %i\n", n % 10000);
    printf("\n");

}



int main() {
    int number;

    while(1){
        printf("Zadaj stvorciferne cislo:\n");
        scanf("%i",&number);
        if(number > 999){
            break;
        }
        else{
            printf("Zadaj vacsie cislo..\n");


        }

    }

    Calculate(number);



}
