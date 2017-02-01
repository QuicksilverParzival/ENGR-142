// C3 CFU
// File: C3_CFU_nfinan.c
// Date: 1 February 2017
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
// Displays several responses depending on value of determinate
#include <stdio.h>
#include <math.h>



int main(void) {
    float a;
    float b;
    float c;
    float d;
    
    printf("Please input a: ");
    scanf("%f", &a);
    printf("Please input b: ");
    scanf("%f", &b);
    printf("Please input c: ");
    scanf("%f", &c);
    
    d = pow(b, 2.0) - (4 * a * c);
    
    if (d > pow(1.0, -9.0)) {
        printf("There are 2 real roots.\n");
    }
    else if (d < pow(-1.0, -9.0)) {
        printf("There are not any real roots.\n");
    }
    else {
        printf("There is only one real root.\n");
    }
    
    return 0;
}

