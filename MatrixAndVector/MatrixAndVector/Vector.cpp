#include "Vector.h"



Vector::Vector()
{
	x = 0.0f;
	y = 0.0f;
	z = 0.0f;
}

Vector::Vector(double x1, double y1, double z1)
{
	x = x1;
	y = y1;
	z = z1;
}


Vector::~Vector()
{
}

void Vector::setX(double newX)
{
	x = newX;
}

void Vector::setY(double newY)
{
	y = newY;
}

void Vector::setZ(double newZ)
{
	z = newZ;
}

double Vector::getX()
{
	return x;
}

double Vector::getY()
{
	return y;
}

double Vector::getZ()
{
	return z;
}

double Vector::getLength()
{
	double length =(double)sqrt((x * x) + (y * y) + (z * z));
	return length;
}

double Vector::getLengthSquared()
{
	double length = (double)((x * x) + (y * y) + (z * z));
	return length;
}

void Vector::normalise()
{
	if (getLength() > 0.0)
	{  // Check for divide by zero
		double magnit = getLength();
		x = x / magnit;
		y = y / magnit;
		z = z / magnit;
	}
}

static Vector operator +(Vector v1, Vector v2)
{
	return Vector(v1.getX() + v2.getX(), v1.getY() + v2.getY(), v1.getZ() + v2.getZ());
}

static Vector operator -(Vector v1, Vector v2)
{
	return Vector(v1.getX() - v2.getX(), v1.getY() - v2.getY(), v1.getZ() - v2.getZ());
}

static Vector operator -(Vector v)
{
	Vector v1 = Vector();
	v1.setX(-v.getX());
	v1.setY(-v.getY());
	v1.setZ(-v.getZ());
	return v1;
}

static double operator *(Vector v1, Vector v2)
{
	return (v1.getX() * v2.getX() + v1.getY() * v2.getY() + v1.getZ() * v2.getZ());
}

static Vector operator *(double k, Vector v1)
{
	return Vector(v1.getX() * (float)k, v1.getY() * (float)k, v1.getZ() * (float)k);
}

static Vector operator *(float k, Vector v1)
{
	return Vector(v1.getX() * k, v1.getY() * k, v1.getZ() * k);
}

static Vector operator *(int k, Vector v1)
{
	return Vector(v1.getX() * k, v1.getY() * k, v1.getZ() * k);
}

static Vector operator ^(Vector v1, Vector v2)
{
	return Vector(v1.getY() * v2.getZ() - v1.getZ() * v2.getY(), v1.getZ() * v2.getX() - v1.getX() * v2.getZ(), v1.getX() * v2.getY() - v1.getY() * v2.getX());
}