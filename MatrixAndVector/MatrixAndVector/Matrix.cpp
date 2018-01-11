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
