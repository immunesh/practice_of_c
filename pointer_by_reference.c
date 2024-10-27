#include<stdio.h>
#include<stdlib.h>

void swap(int *x, int *y);

int main(){
    int a = 100, b = 200;
    swap(&a, &b);
    printf("Numbers after swaping: %d, %d", a, b);
    return 0;
}

void swap(int *x, int *y){
    int temp = 0;
    temp = *y;
    *y = *x;
    *x = temp;
}