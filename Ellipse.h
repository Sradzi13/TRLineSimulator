/*
 * Ellipse.h
 *
 *  Created on: Jul 9, 2015
 *      Author: sarahradzihovsky
 */

#ifndef ELLIPSE_H_
#define ELLIPSE_H_

class Ellipse : public CoaxXSection {
public:
	Ellipse(double r, double R, double eps, double a, double b);
	virtual ~Ellipse();

	double getZ0();
	double getG();
	double getE();
	double getF();
	double getAlpha();
	double getLambda();
	double getBeta(double f);

private:
	double r, R, eps, a, b;
};

#endif /* ELLIPSE_H_ */
