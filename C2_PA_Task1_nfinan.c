// C2 Task 1
// File: C2_PA_Task1_nfinan.c
// Date: 30 January 2017
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
// Unit Conversion Test File
#include <stdio.h>
#include "C2_PA_Task1_nfinan.h"


int main(void) {
    
    double lbs;
    double km;
    double ag;
    double sqmi;
    double wv;
    double kev;
    
    printf("Mass Conversions\nEnter value to convert lbs-kg:\n");
    scanf("%lf", &lbs);
    printf("Converted Mass is:\n%.2lf\n\n", lbs2kg(lbs));
    
    printf("Length Conversions\nEnter value to convert km-mi:\n");
    scanf("%lf", &km);
    printf("Converted Length is:\n%.2lf\n\n", km2mi(km));
    
    printf("Enter value to convert ag-nm:\n");
    scanf("%lf", &ag);
    printf("Converted Length is:\n%.2lf\n\n", ag2nm(ag));
    
    printf("Area Conversions\nEnter value to convert sqmi-sqkm:\n");
    scanf("%lf", &sqmi);
    printf("Converted Area is:\n%.2lf\n\n", sqmi2sqkm(sqmi));
    
    printf("Special Unit Conversions\n");
    printf("Enter value to convert wavelength-energy:\n");
    scanf("%lf", &wv);
    printf("Converted Unit is:\n%.2lf\n\n", wv2e(wv));
    
    printf("Enter value to convert keV-joule:\n");
    scanf("%lf", &kev);
    printf("Converted Unit is:\n%.2lf\n\n", kev2j(kev));
    
    printf("Test Program Terminated\n");

    
    return 0;
}