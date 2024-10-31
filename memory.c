#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char *str;
    //Initial Memory Allocation
    str = (char *)malloc(15);
    strcpy(str, "Munesh");
    printf("String = %s, Address = %u\n", str, str);

    //Reallocating Memory

    str = (char *)realloc(str, 25);
    strcat(str,".com");
    printf("String = %s, Address = %u\n", str, str);

    free(str);

    return (0); 

}