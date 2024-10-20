#include<stdio.h>

void multiplyTwo(int x, int y ){
    int result = 0;
    result = x*y;
    printf("The Product of %d multiply by %d is: %d \n", x,y,result);
}


int main(void){

    multiplyTwo(8,6);
    multiplyTwo(34,56);
    multiplyTwo(5,6);
}

