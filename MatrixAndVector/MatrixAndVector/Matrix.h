#pragma once
class Matrix
{
public:
	Matrix();
	Matrix(double newA11, double newA12, double newA13,
		double newA21, double newA22, double newA23,
		double newA31, double newA32, double newA33);
	~Matrix();

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

