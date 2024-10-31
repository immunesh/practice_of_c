#include<stdio.h>


struct date
{
    int month;
    int day;
    int year;
};

struct intPtrs
{
    int *p1;
    int *p2;

};

void main(){
    struct date today, *datePtr;
    struct intPtrs pointers;
    int i1 = 100, i2;

    pointers.p1 = &i1;
    pointers.p2 = &i2;
    *pointers.p2 = -97;

    datePtr = &today;

    datePtr->month = 9;
    datePtr->day = 25;
    datePtr->year = 2015;

    printf("Todays date is %i/%i/%.2i\n", datePtr->month, datePtr->day, datePtr->year%100);
    printf("i1 = %i, *pointers.p1 = %i\n", i1, *pointers.p1);
    printf("i2 = %i, *pointers.p2 = %i\n", i2, *pointers.p2);

}

