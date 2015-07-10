/*
 * Ellipse.h
 *
 *  Created on: Jul 9, 2015
 *      Author: sarahradzihovsky
 */

#ifndef ELLIPSE_H_
#define ELLIPSE_H_
#include "CoaxXSection.h"
#include "TRLineXSect.h"
using namespace std;

class Ellipse : public CoaxXSection {
public:
	Ellipse(double r, double R, double eps, double a);

	virtual ~Ellipse();

	double getZ0();
	double getG();
	double getE();
	double getF();
	double getAlpha();
	double getLambda();

private:
	double r, R, eps, a;
};

#endif /* ELLIPSE_H_ */
