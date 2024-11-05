#include<stdio.h>
#include<stdlib.h>

int stringLength(const char *string);

int main(){
    printf("%d \n", stringLength("Munesh Kushwah"));
    printf("string lenth: %d \n",stringLength(" "));
    printf("string lenth: %d \n",stringLength("Munesh"));
    return 0;
}

int stringLength(const char *string){
    const char *lastaddress = string;

    while(*lastaddress)
        ++lastaddress;
    
    return lastaddress - string;
}