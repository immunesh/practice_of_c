#include<stdio.h>

int gcd(int x, int y);
float absoluteValue(float x);
float squareRoot(float x);

int main(){
    int result = 0;
    result = gcd(45, 85);
    float f1 = 15.5, f2 = -20.7, f3 = -5.0;
    float returnValue = 0.0;
    float res = 0.0;
    printf("The gcd of two number 45 and 85 is %d \n", result);
    printf("The gcd of two number 90 and 75 is %d \n", result);
    printf("The gcd of two number 46 and 1032 is %d \n", gcd(46,1032));
    //testing absolute value 
    returnValue = absoluteValue(f1);
    printf("Absolute Value: %.2f \n", returnValue );
    printf("f1 = %.2f \n", f1);
    returnValue = absoluteValue(f2) + absoluteValue(f3);
    printf("Absolute value Now: %.2f \n", returnValue);

    // Testing Square Root
    res = squareRoot(25);
    printf("Square root of 25: %.2f \n", res);
    printf("Square root of 64: %.2f \n", squareRoot(64));
    printf("Square root of 225: %.2f \n", squareRoot(225));

    return 0;
}

int gcd(int u, int v){
    int temp = 0;

    while(v!=0){
        temp = u % v;
        u = v;
        v = temp;
    }

    return u;
}

float absoluteValue(float x){
    if(x < 0){
        x = -x;
    }
    return x;
}

float squareRoot(float x){

    float epsilon = 0.00001;
    float guess = 1.0;
    float returnSquare = 0.0;
    if (x < 0){
        printf(" Please Don't Enter Negative Argument for sqare root");
        return -1.0;
    }else {
        while(absoluteValue(guess*guess - x)>= epsilon){
            guess = (x/guess +guess)/2.0;
            returnSquare =  guess;
        }
        return returnSquare; 
    }
    
}