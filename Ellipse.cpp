/*
 * Ellipse.cpp
 *
 *  Created on: Jul 9, 2015
 *      Author: sarahradzihovsky
 */

#include "Ellipse.h"
#include "CoaxXSection.h"
#include "TRLineXSect.h"
#include <iostream>
#include <math.h>
using namespace std;

/* Constants */
const double eps0 = 8.854 * pow(10.0 , -12.0);
const double mu0 = 4.0 * M_PI * pow(10.0, -7.0);

Ellipse::Ellipse(double r, double R, double eps, double a)
{
	this -> r = r;
	this -> R = R;
	this -> eps = eps;
	this -> a = a;
}

Ellipse::~Ellipse() {
}

/*Given F, E, and G, finds Z0*/
double Ellipse::getZ0(){
	double G = getG();
	return 59.952 * log(G + sqrt(pow(G, 2) - 1));
}

/*Given alpha and E, calculates E (a factor of Z0)*/
double Ellipse::getG(){
	double alpha = getAlpha();
	double E = getE();
	double x = (1 - E) * (1 - ((1 - E) / 2));
	double y = ((2 * r) / (alpha * R)) + (((alpha * R) / r) * x);
	return (1 / 2) * (y);
}

/*Given permittivity, calculates eta*/
double  Ellipse::getE(){
	double alpha = getAlpha();
	double F = getF();
	return (1 - (1 / alpha)) * pow((r / R), F);
}

/*
 * Given radii of inner circular cross section and smaller radii
 * of outer ellipse, calculates F
 */
double  Ellipse::getF(){
	double alpha = getAlpha();
	double x = 1 - pow((r / R), (10 / alpha));
	return (2 / alpha) * x;
}

double  Ellipse::getAlpha(){
	double lbda = getLambda();
	double x = 1 - (pow(lbda, 2) / 8) + ((3 / 128) * pow(lbda, 4));
	return sqrt(1 + lbda) * x;
}

double  Ellipse::getLambda(){
	double num = pow(a, 2) - pow(R, 2);
	double denom = pow(a, 2) + pow(R, 2);
	return num / denom;
}
