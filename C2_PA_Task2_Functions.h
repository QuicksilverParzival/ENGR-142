// C2 Task 2 Header File
// File: C2_PA_Task2_Functions.h
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
double PhotonEnergy(double wavelength);
double SailVelocity(double energy, double mass);

double PhotonEnergy(double wavelength) {
    
    double E;
    E = wv2e(wavelength);
    
    return E;
}

double SailVelocity(double energy, double mass) {
    
    double velocity;
    velocity = pow((2 * energy / mass), (1.0/2.0));
    
    
    return velocity;
}