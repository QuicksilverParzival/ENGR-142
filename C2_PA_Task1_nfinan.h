// C2 Task 1 Header File
// File: C2_PA_Task1_nfinan.h
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
// Header File Containing Various Repeated Functions
#include <stdio.h>
#include <math.h>

//prototype Declarations
double lbs2kg(double lbs); //Pounds to Kilograms
double km2mi(double km); //Kilometers to Miles
double ag2nm(double ag); //Angstroms to nanometers
double sqmi2sqkm(double sqmi); //Square miles to square kilometers
double wv2e(double wv); //Wavelength (in nm) to Energy (in KeV)
double kev2j(double kev); //KeV to Joules

double lbs2kg(double lbs){
    double kg;
    kg = 0.453592 * lbs;
    
    return kg;
}

double km2mi(double km){
    double mi;
    mi = 0.621371 * km;
    
    return mi;
}

double ag2nm(double ag){
    double nm;
    nm = 0.1 * ag;
    
    return nm;
}

double sqmi2sqkm(double sqmi){
    double sqkm;
    sqkm = 2.58999 * sqmi;
    
    return sqkm;
}

double wv2e(double wv){
    double e;
    //computer would approximate to zero.
/*  double h;
    double c;
    h = 4.135667662 * pow(10,-18); //(KeV * s)
    c = 299792458; //(m/s)
    e = h * c * pow(10, 9) / wavelength //E(KeV)
*/
    e = 1.23984193 / wv; //(KeV)
    
    return e;
}

double kev2j(double kev){
    double j;
    j = 1.60218 * pow(10.0, -16.0) * kev;
    
    return j;
}