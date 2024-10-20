#include<stdio.h>
#include<stdlib.h>

int stringLength(const char str[]);
char conCat(char result[], const char str1[], const char str2[]);


int main(){
    const char word1[] = "Munesh";
    const char word2[] = "Bhai";
    const char word3[] = "Kushwah";
    char result[50];
    printf("%d    %d      %d", stringLength(word1), stringLength(word2), stringLength(word3));
    conCat(result,word1,word2);
    printf("\n Concatinate string of str1 and str2: %s \n", result);
    return 0;
}

int stringLength(const char str[]){
    int count = 0;

    while(str[count] != '\0'){
        ++count;
    }
    return count;
}

char conCat(char result[], const char str1[], const char str2[]){
    int i, j;
    for(i = 0; str1[i] != '\0'; i++){
        result[i] = str1[i];
    }
    for(j = 0; str2[j] != '\0'; j++){
        result[i + j] = str2[j];
    }

    result[i + j] = '\0';
}