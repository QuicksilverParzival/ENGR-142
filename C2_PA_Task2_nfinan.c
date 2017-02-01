// C2 Task 2 Main Code
// File: C2_PA_Task2_nfinan.c
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
// Main Code for Calculating number of photons & the Energy they carry
#include <stdio.h>
#include <math.h>
#include "C2_PA_Task1_nfinan.h"
#include "C2_PA_Task2_Functions.h"


int main(void) {
    //declare variables
    double length;
    double captured;
    double wavelength;
    double mass;
    double massKg;
    double photons;
    double E;
    double velocity;
    double areaMi;
    double areaKm;
    double area;
    double wavelengthNm;
    double photonE;
    
    
    //Inputs
    printf("Side length of sail (mi): ");
    scanf("%lf", &length);
    printf("Photons captured (photons/cm^2): ");
    scanf("%lf", &captured);
    printf("Wavelength of light (Angstroms): ");
    scanf("%lf", &wavelength);
    printf("Weight of vehicle (lbs): ");
    scanf("%lf", &mass);
    
    //Computations
    areaMi = pow(length, 2.0); //(mi^2)
    areaKm = sqmi2sqkm(areaMi); //(km^2)
    area = areaKm * pow(10, 10); //(cm^2)
    photons = captured * area; //(photons)
    wavelengthNm = ag2nm(wavelength); //(nm)
    photonE = kev2j(PhotonEnergy(wavelengthNm)); //(J)
    E = photonE * photons; //(J)
    massKg = lbs2kg(mass); //(kg)
    velocity = SailVelocity(E, massKg); //(m/s)
    
    //Output
    printf("\nNumber of photons captured: %.0lf\n", photons);
    printf("Total photon energy (J): %.2lf\n", E);
    printf("Change in velocity of the vehicle (m/s): %.2lf\n", velocity);
    
    
    return 0;
}