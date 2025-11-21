#include<stdio.h>
#include<stdlib.h>

int stringCompare(const char *str1, const char *str2);
char* stringCopy(char *dest, const char *src);

int main(){
    char str1[] = "Hello";
    char str2[] = "World";
    char str3[] = "Hello";
    char dest[50];

    // Test strcmp implementation
    printf("Comparing '%s' and '%s': %d\n", str1, str2, stringCompare(str1, str2));
    printf("Comparing '%s' and '%s': %d\n", str1, str3, stringCompare(str1, str3));
    printf("Comparing '%s' and '%s': %d\n", str2, str1, stringCompare(str2, str1));

    // Test strcpy implementation
    printf("\nBefore copy, dest: (empty)\n");
    stringCopy(dest, str1);
    printf("After copying '%s' to dest: %s\n", str1, dest);
    
    stringCopy(dest, str2);
    printf("After copying '%s' to dest: %s\n", str2, dest);

    // Additional test cases
    char test1[] = "ABC";
    char test2[] = "ABD";
    printf("\nComparing '%s' and '%s': %d\n", test1, test2, stringCompare(test1, test2));
    
    return 0;
}

// Custom implementation of strcmp
// Returns: 0 if strings are equal
//          negative value if str1 < str2
//          positive value if str1 > str2
int stringCompare(const char *str1, const char *str2){
    int i = 0;
    
    while(str1[i] != '\0' && str2[i] != '\0'){
        if(str1[i] != str2[i]){
            return str1[i] - str2[i];
        }
        i++;
    }
    
    // If we reach here, one or both strings ended
    return str1[i] - str2[i];
}

// Custom implementation of strcpy
// Copies the string from src to dest including null terminator
// Returns: pointer to dest
char* stringCopy(char *dest, const char *src){
    int i = 0;
    
    while(src[i] != '\0'){
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';  // Add null terminator
    
    return dest;
}
