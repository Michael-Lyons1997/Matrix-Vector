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

Matrix::Matrix(Vector Row1, Vector Row2, Vector Row3)
{
	A11 = Row1.getX();
	A12 = Row1.getY();
	A13 = Row1.getZ();
	A21 = Row2.getX();
	A22 = Row2.getY();
	A23 = Row2.getZ();
	A31 = Row3.getX();
	A32 = Row3.getY();
	A33 = Row3.getZ();
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

Vector Matrix::operator*(Matrix M1, Vector V1)
{
	return Vector(M1.A11 * V1.getX() + M1.A12 * V1.getY() + M1.A13 * V1.getZ(),
		M1.A21 * V1.getX() + M1.A22 * V1.getY() + M1.A23 * V1.getZ(),
		M1.A31 * V1.getX() + M1.A32 * V1.getY() + M1.A33 * V1.getZ());
	
}

Vector Matrix::operator*(Vector V1, Matrix M1)
{
	return Vector(M1.A11 * V1.getX() + M1.A21 * V1.getY() + M1.A31 * V1.getZ(),
		M1.A12 * V1.getX() + M1.A22 * V1.getY() + M1.A32 * V1.getZ(),
		M1.A13 * V1.getX() + M1.A23 * V1.getY() + M1.A33 * V1.getZ());
}

Matrix Matrix::Transpose(Matrix M1)
{
	return Matrix(M1.A11, M1.A21, M1.A31,
		M1.A12, M1.A22, M1.A32,
		M1.A13, M1.A23, M1.A33);
}

Matrix Matrix::operator +(Matrix M1, Matrix M2)
{
	return Matrix(M1.getA11() + M2.getA11(), M1.getA12() + M2.getA12(), M1.getA13() + M2.getA13(),
		M1.getA21() + M2.getA21(), M1.getA22() + M2.getA22(), M1.getA23() + M2.getA23(),
		M1.getA31() + M2.getA31(), M1.getA32() + M2.getA32(), M1.getA33() + M2.getA33());
}
Matrix Matrix::operator -(Matrix M1, Matrix M2)
{
	return Matrix(M1.getA11() - M2.getA11(), M1.getA12() - M2.getA12(), M1.getA13() - M2.getA13(),
		M1.getA21() - M2.getA21(), M1.getA22() - M2.getA22(), M1.getA23() - M2.getA23(),
		M1.getA31() - M2.getA31(), M1.getA32() - M2.getA32(), M1.getA33() - M2.getA33());
}
Matrix Matrix::operator *(double x, Matrix M1)
{
	Matrix answer = Matrix();
	answer.setA11(M1.getA11() * x);
	answer.setA12(M1.getA12() * x);
	answer.setA13(M1.getA13() * x);

	answer.setA21(M1.getA21() * x);
	answer.setA22(M1.getA22() * x);
	answer.setA23(M1.getA23() * x);

	answer.setA31(M1.getA31() * x);
	answer.setA32(M1.getA32() * x);
	answer.setA33(M1.getA33() * x);

	return answer;
}

Matrix Matrix::operator *(Matrix M1, Matrix M2)
{
	Matrix answer = Matrix();
	answer.setA11(M1.Row(0) * M2.Column(0));
	answer.setA12(M1.Row(0) * M2.Column(1));
	answer.setA13(M1.Row(0) * M2.Column(2));

	answer.setA21(M1.Row(1) * M2.Column(0));
	answer.setA22(M1.Row(1) * M2.Column(1));
	answer.setA23(M1.Row(1) * M2.Column(2));

	answer.setA31(M1.Row(2) * M2.Column(0));
	answer.setA32(M1.Row(2) * M2.Column(1));
	answer.setA33(M1.Row(2) * M2.Column(2));


	return answer;
}
double Matrix::Determinant(Matrix M1)
{// method to return the determinant of a 3x3 matrix
 //                     aei      -     ahf                  + dhc                     - gec                      +    gbh                    -     dbi   
	return M1.getA11() * M1.getA22() * M1.getA33() - M1.getA11() * M1.getA32() * M1.getA23() + M1.getA21() * M1.getA32() * M1.getA13() - M1.getA31() * M1.getA22() * M1.getA13() + M1.getA31() * M1.getA12() * M1.getA23() - M1.getA21() * M1.getA12() * M1.getA33();
}

Vector Matrix::Row(int i)
{
	
	switch (i)
	{
	case 0:
		return Vector(A11, A12, A13);
	case 1:
		return Vector(A21, A22, A23);
	case 2:
	default:
		return Vector(A31, A32, A33);
	}
}

Vector Matrix::Column(int i)
{
	switch (i)
	{
	case 0:
		return Vector(A11, A21, A31);
	case 1:
		return Vector(A12, A22, A32);
	case 2:
	default:
		return Vector(A13, A23, A33);
	}
}

Matrix Matrix::Inverse(Matrix M1)
{
	double det = Determinant(M1);
	if (det == 0)
		return Matrix();
	else
	{
		double scale = 1 / det;
		Matrix answer = Matrix();
		answer.A11 = scale * (M1.A22 * M1.A33 - M1.A23 * M1.A32); // ei-fh
		answer.A12 = scale * (M1.A13 * M1.A32 - M1.A12 * M1.A33); // ch-bi
		answer.A13 = scale * (M1.A12 * M1.A23 - M1.A13 * M1.A22); // ch-bi

		answer.A21 = scale * (M1.A23 * M1.A31 - M1.A21 * M1.A33); // fg-di
		answer.A22 = scale * (M1.A11 * M1.A33 - M1.A13 * M1.A31); // ai-cg
		answer.A23 = scale * (M1.A13 * M1.A21 - M1.A11 * M1.A23); // cd-af


		answer.A31 = scale * (M1.A21 * M1.A32 - M1.A22 * M1.A31); // dh-eg
		answer.A32 = scale * (M1.A12 * M1.A31 - M1.A11 * M1.A32); // bg-ah
		answer.A33 = scale * (M1.A11 * M1.A22 - M1.A12 * M1.A21); // ae-bd

		return answer;
}

Matrix Matrix::Rotation(int _angle)
{
	double radians = Math.PI / 180 * _angle;
	Matrix answer = Matrix();
	answer.A11 = Math.Cos(radians);
	answer.A12 = Math.Sin(radians);
	answer.A13 = 0;
	answer.A21 = -Math.Sin(radians);
	answer.A22 = Math.Cos(radians);
	answer.A23 = 0;
	answer.A31 = 0;
	answer.A32 = 0;
	answer.A33 = 1;

	return answer;
}


static Matrix Translate(int dx, int dy)
{
	Matrix answer = Matrix();
	answer.A11 = 1;
	answer.A12 = 0;
	answer.A13 = 0;
	answer.A21 = 0;
	answer.A22 = 1;
	answer.A23 = 0;
	answer.A31 = dx;
	answer.A32 = dy;
	answer.A33 = 1;

	return answer;
}

static Matrix Scale(int dx, int dy)
{
	Matrix answer = Matrix();
	answer.A11 = (double)dx / 100;
	answer.A12 = 0;
	answer.A13 = 0;
	answer.A21 = 0;
	answer.A22 = (double)dy / 100;
	answer.A23 = 0;
	answer.A31 = 0;
	answer.A32 = 0;
	answer.A33 = 1;

	return answer;
}

static Matrix operator -(Matrix M1)
{
	return -1 * M1;
}

static Matrix RotationX(int _angle)
{
	double radians = Math.PI / 180 * _angle;
	Matrix answer = Matrix();
	answer.A11 = 1;
	answer.A12 = 0;
	answer.A13 = 0;
	answer.A21 = 0;
	answer.A22 = Math.Cos(radians);
	answer.A23 = -Math.Sin(radians);
	answer.A31 = 0;
	answer.A32 = Math.Sin(radians);
	answer.A33 = Math.Cos(radians);

	return answer;
}
static Matrix RotationY(int _angle)
{
	double radians = Math.PI / 180 * _angle;
	Matrix answer = Matrix();
	answer.A11 = Math.Cos(radians);
	answer.A12 = 0;
	answer.A13 = Math.Sin(radians);
	answer.A21 = 0;
	answer.A22 = 1;
	answer.A23 = 0;
	answer.A31 = -Math.Sin(radians);
	answer.A32 = 0;
	answer.A33 = Math.Cos(radians);

	return answer;
}
static Matrix RotationZ(int _angle)
{
	double radians = Math.PI / 180 * _angle;
	Matrix answer = Matrix();
	answer.A11 = Math.Cos(radians);
	answer.A12 = -Math.Sin(radians);
	answer.A13 = 0;
	answer.A21 = Math.Sin(radians);
	answer.A22 = Math.Cos(radians);
	answer.A23 = 0;
	answer.A31 = 0;
	answer.A32 = 0;
	answer.A33 = 1;

	return answer;
}

static Matrix Scale3D(int dx)
{
	Matrix answer = Matrix();
	answer.A11 = (double)dx / 100;
	answer.A12 = 0;
	answer.A13 = 0;
	answer.A21 = 0;
	answer.A22 = (double)dx / 100;
	answer.A23 = 0;
	answer.A31 = 0;
	answer.A32 = 0;
	answer.A33 = (double)dx / 100;

	return answer;
}