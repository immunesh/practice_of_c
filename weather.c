#include<stdio.h>
#include<stdlib.h>

#define MONTHS 12
#define YEARS 5


int main(){

float rainfall[YEARS][MONTHS] = {
        {10.1, 12.3, 8.5, 15.6, 22.4, 18.5, 14.2, 16.7, 11.3, 20.9, 24.6, 30.2}, // Year 1
        {9.8, 10.2, 11.4, 13.5, 25.4, 19.1, 17.2, 14.6, 10.9, 23.3, 26.1, 32.0},  // Year 2
        {8.7, 9.4, 12.5, 14.2, 23.7, 20.4, 18.9, 13.8, 11.7, 22.4, 28.3, 29.9},   // Year 3
        {11.0, 13.2, 10.9, 17.5, 21.9, 16.6, 19.0, 15.4, 12.8, 24.5, 27.0, 31.5}, // Year 4
        {9.9, 11.7, 13.8, 16.3, 24.8, 18.2, 20.5, 14.9, 13.4, 21.7, 25.5, 30.7}   // Year 5
    };

int year, month;
float subtot = 0.0, total = 0.0;
printf("YEARS\t\t Rainfall(inches) \n");
for(year = 0, total= 0; year < YEARS; year++){
    for(month = 0, subtot = 0; month < MONTHS; month++ ){
        subtot += rainfall[year][month];    
    }
    total += subtot;
    printf("%5d\t\t %.1f \n", 2010 + year, subtot);
}

printf("Yearly Average: %.1f \n",total/YEARS);

printf("The Monthly Average: \n");
printf("Jan   Feb   Mar   Apr   May   Jun   Jul   Aug   Sep   Oct   Nov   Dec \n");

for(month = 0, total=0; month < MONTHS; month++){
    for(year = 0, subtot = 0;year < YEARS; year++){
        subtot += rainfall[year][month];
    }
    total += subtot;
    printf("%.1f  ",subtot);
}
printf("\n Month average: %.1f", total/MONTHS);

return 0;
}