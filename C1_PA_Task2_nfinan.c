// C1 Post Activity Task 2
// File: C1_PA_Task2_nfinan.c
// Date: 24 September 2017
// By: Nicholas Finan
// nfinan
// Section: 3
// Team: 49
//
// ELECTRONIC SIGNATURE
// Nicholas Finan
//
// The electronic signature above indicates that the program
// submitted for evaluation is my individual work. I have
// a general understanding of all aspects of its development
// and execution.
//
// This program takes 3 separate parts of a name, age and days 
// since last bithday to output the complete name and exact age.
#include <stdio.h>
#include <math.h>

int main(void) {
    
    char first[20];
    char last[20];
    char mid;
    int age;
    int days;
    double years;
    double minutes;
    
    
    printf("This program takes 3 separate parts of a name, age and days \n");
    printf("since last bithday to output the complete name and exact age.\n");
    printf("\nEnter your last name: ");
    scanf("%s", last);
    printf("Enter your first name: ");
    scanf("%s", first);
    printf("Enter middle initial: ");
    scanf(" %c", &mid);
    printf("Enter your age in whole years: ");
    scanf("%d", &age);
    printf("Enter the days elapsed since your last birthday: ");
    scanf("%d", &days);
    
    years = age + (days / 365.242199);
    minutes = years * 365.242199 * 24 * 60;
    
    
    
    printf("\nMr./Ms. %s %c. %s\n", first, mid, last);
    printf("You are %.5lf years old.\n", years);
    printf("You are %8.lf minutes old.\n", minutes);
    
    
    return 0;
}