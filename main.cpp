#include <complex>
#include <numbers>
#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;
/* ---------------------------
Laboratoire : 02
Auteur(s) : Bron Tenakor
Date : 23/09/2026
But : Calcul du temps de trajet 
Remarque(s) : 
--------------------------- */
int main() {
    const double s1 = 5; //km/h
    const double s2 = 2; //km/h
    const double dx = 3; //km
    const double dy = 10; //km
    const double L1 = 6; //km
    double L2 = 0; //km

    // calculating the second triangle's edge
    const double d = dy - L1;
    // calcul de L2: pythagoras, L2 being the hypo
    L2 = sqrt(pow(dx,2)+ pow(d,2));
    // calculating the time along L1
    const double t1 = L1/s1;
    // ccalculating the time along L2
    const double t2 = L2/s2;
    // sum of every delays
    const double temps_total = t1 + t2;

    cout << "Temps de trajet total:" << temps_total << endl;

    return EXIT_SUCCESS;
}