#pragma once
#include <cmath>
class Vector
{
public:
	Vector();
	Vector(double x1, double y1, double z1);
	~Vector();
	void setX(double newX);
	void setY(double newY);
	void setZ(double newZ);
	double getX();
	double getY();
	double getZ();
	double getLength();
	double getLengthSquared();
	void normalise();
	static Vector operator +(Vector v1, Vector v2);
	static Vector operator -(Vector v1, Vector v2);
	static Vector operator -(Vector v);
	static double operator *(Vector v1, Vector v2);
	static Vector operator *(double k, Vector v1);
	static Vector operator *(float k, Vector v1);
	static Vector operator *(int k, Vector v1);
	static Vector operator ^(Vector v1, Vector v2);
protected:
	double x;
	double y;
	double z;
};

