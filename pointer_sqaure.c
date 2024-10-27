#include<stdio.h>
#include<stdlib.h>

void square(int *x);

int main(){
    int num = 4;
    square(&num);
    printf("The Value of Num Square is: %d", num);
    return 0;
}

void square(int *x){
    *x = (*x) * (*x);
}