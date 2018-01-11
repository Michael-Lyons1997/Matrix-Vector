#pragma once
#include "Vector.h"
class Matrix
{
public:
	Matrix();
	Matrix(double newA11, double newA12, double newA13,
		double newA21, double newA22, double newA23,
		double newA31, double newA32, double newA33);
	~Matrix();
	void setA11(double newA11);
	void setA12(double newA12);
	void setA13(double newA13);
	void setA21(double newA21);
	void setA22(double newA22);
	void setA23(double newA23);
	void setA31(double newA31);
	void setA32(double newA32);
	void setA33(double newA33);

	double getA11();
	double getA12();
	double getA13();
	double getA21();
	double getA22();
	double getA23();
	double getA31();
	double getA32();
	double getA33();

protected:
	double A11;
	double A12;
	double A13;
	double A21;
	double A22;
	double A23;
	double A31;
	double A32;
	double A33;
};

