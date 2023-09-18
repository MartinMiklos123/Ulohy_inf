#include <stdio.h>


double circumference(const int *r, const double *pi){
    return 2*(*pi)*(*r);



}

double area(const int *r, const double *pi){
    return (*pi)*((*r)*(*r));

}




int main(){
    double pi = 3.14159;
    int r;

    printf("Zadaj polomer:\n");
    scanf("%d",&r);
    printf("obvod kruhu: %f\n",circumference(&r, &pi));
    printf("obsah kruhu: %f\n",area(&r, &pi));




    return 0;

}

