// C1 Post Activity Task 1
// File: C1_PA_Task1_nfinan.c
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
// This program calculates the volume of a cylindrical tank
// and outputs the volume in US gallons. Height and Diameter
// are outputted in feet and in feet and inches.
#include <stdio.h>
#include <math.h>
#define PI (4.0 * atan(1.0))
int main(void) {
    
    float d;
    float h;
    float v;
    float hFt;
    float dFt;
    float hFtInch;
    float dFtInch;
    float hInch;
    float dInch;
    
    printf("This program calculates the volume of a cylindrical tank \n");
    printf("and outputs the volume in US gallons. Height and Diameter \n");
    printf("are outputted in feet and in feet and inches.\n\n");
    printf("Enter Diameter in meters: ");
    scanf("%f", &d);
    printf("Enter Height in meters: ");
    scanf("%f", &h);
    
    hFt = 3.28084 * h;
    dFt = 3.28084 * d;
    
    v = PI * pow(( dFt / 2.0 ), 2.0) * hFt * 7.48052;
    
    hFtInch = floor(hFt);
    dFtInch = floor(dFt);
    hInch = ( hFt - hFtInch ) * 12;
    dInch = ( dFt - dFtInch ) * 12;
   
    printf("\nVolume in US gallons: %.1f", v);
    printf("\nHeight in ft: %.1f", hFt);
    printf("\nDiameter in ft: %.1f", dFt);
    
    printf("\n\nVolume in US gallons: %.1f", v);
    printf("\nHeight in ft: %.0f ft %.1f in", hFtInch, hInch);
    printf("\nDiameter in ft: %.0f ft %.1f in\n", dFtInch, dInch);
    
    
    return 0;
}