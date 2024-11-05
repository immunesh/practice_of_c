#include<stdio.h>
#include<stdlib.h>

int main(){
    int size = 0;
    char *text = NULL;

    printf(" Enter the Limit of the character string:");
    scanf("%d", &size);

    text = (char *)malloc(size * sizeof(char));

    if (text != NULL){
        printf("Input the string of given size: \n");
        scanf(" ");
        fgets(text, size, stdin);

        printf("The Inputted string is: %s \n", text);
        
    }
    free(text);
    text = NULL;
    return 0;

}