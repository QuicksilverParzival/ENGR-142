// C2 CFU
// File: C2_CFU_nfinan.c
// Date: 25 September 2017
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

double RightTriArea(double height,double base);

int main(void) {
    double height;
    double base;
    double area;
    printf("The following program will compute the area of a right triangle.");
    printf("\n\nEnter the triangle height: ");
    scanf("%lf", &height);
    printf("Enter the triangle base: ");
    scanf("%lf", &base);
    
    area = RightTriArea(height, base);
    
    printf("\nArea of the triangle is %.3lf sq. units.\n\n", area);
    
    return 0;
}

double RightTriArea(double height,double base) {
    double area;
    area = ( base * height ) / 2;
    
    return area;
}