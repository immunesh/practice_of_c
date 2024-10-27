#include<stdio.h>


int main(){
    int num = 150;
    int *pNum = NULL;

    pNum = &num;

    printf("Value of Num Address: %p \n", &num);
    printf("Value of Pointer Address: %p \n", &pNum);
    printf("Value of Pointer Itself: %p \n", pNum);
    printf("Value of Pointer it is Pointing to: %d \n", *pNum);

}