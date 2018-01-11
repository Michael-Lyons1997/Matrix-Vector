#include "Matrix.h"



Matrix::Matrix()
{
	A11 = 0.0;
	A12 = 0.0;
	A13 = 0.0;
	A21 = 0.0;
	A22 = 0.0;
	A23 = 0.0;
	A31 = 0.0;
	A32 = 0.0;
	A33 = 0.0;
}

Matrix::Matrix(double newA11, double newA12, double newA13, double newA21, double newA22, double newA23, double newA31, double newA32, double newA33)
{
	A11 = newA11;
	A12 = newA12;
	A13 = newA13;
	A21 = newA21;
	A22 = newA22;
	A23 = newA23;
	A31 = newA31;
	A32 = newA32;
	A33 = newA33;
}


Matrix::~Matrix()
{
}

void Matrix::setA11(double newA11)
{
	A11 = newA11;
}

void Matrix::setA12(double newA12)
{
	A12 = newA12;
}

void Matrix::setA13(double newA13)
{
	A13 = newA13;
}

void Matrix::setA21(double newA21)
{
	A21 = newA21;
}

void Matrix::setA22(double newA22)
{
	A22 = newA22;
}

void Matrix::setA23(double newA23)
{
	A23 = newA23;
}

void Matrix::setA31(double newA31)
{
	A31 = newA31;
}

void Matrix::setA32(double newA32)
{
	A32 = newA32;
}

void Matrix::setA33(double newA33)
{
	A33 = newA33;
}

double Matrix::getA11()
{
	return A11;
}

double Matrix::getA12()
{
	return A12;
}

double Matrix::getA13()
{
	return A13;
}

double Matrix::getA21()
{
	return A21;
}

double Matrix::getA22()
{
	return A22;
}

double Matrix::getA23()
{
	return A23;
}

double Matrix::getA31()
{
	return A31;
}

double Matrix::getA32()
{
	return A32;
}

double Matrix::getA33()
{
	return A33;
}
