#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){
    char str[100], name[25][50], temp[25];
    int l = 0, i = 0, n = 0, j = 0;
#if 0
    printf("\n\nEnter the String Which we need to Reverse: \n");
    scanf("%s", str);
    l = strlen(str);

    for(i = l; i >=0; i--){
        printf("%c", str[i]);
    }
#endif
    printf("Enter How many Number of Strings You Have: \n");
    scanf("%d", &n);
    printf("Input String %d : \n", n);
    for(i = 0; i < n; i++){
        scanf("%s", name[i]);
    }

    for(i = 1; i <= n; i++)
        for(j = 0; j <= n-i; j++)
            if(strcmp(name[j],name[j+1])>0){
                strncpy(temp,name[j],sizeof(temp) - 1);
                strncpy(name[j],name[j+1],sizeof(name[j]) - 1);
                strncpy(name[j+1], temp,sizeof(name[j]+1)-1);
            }
    printf("String Appear after Sorting:");
    for(i = 0; i <= n; i++){
        printf("%s\n",name[i]);
    }

}