// Osman Khan
// CECS 282-07
// Proj 6 - Inheritance  
// 12/9/2019
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class luggage
{
protected:
		static int count;
		string type;
public:
	luggage()
	{
		type = " ";
		count++;
	}
	~luggage()
	{
		count--;
	}
	virtual double getVolume() = 0
	{
		return 0;
	}
	virtual string getType() = 0
	{
		return " ";
	}
	static int GetCount()
	{
		return count;
	}
};

class box : public luggage
{
private:
	double height, width, length;
public:
	box(double h, double w, double l)
	{
		height = h;
		width = w;
		length = l;
		type = "Box";
	}
	double getVolume()
	{
		return height * width * length;
	}
	string getType()
	{
		return type;
	}
	static int GetCount()
	{
		return count;
	}
};

class sphere : public luggage
{
private:
	double radius;
public:
	sphere(double r)
	{
		radius = r;
		type = "Sphere";
	}
	double getVolume()
	{
		double value = 1.333;
		double pi = 3.1415;
		double volume = value * pi * pow(radius, 3);
		return volume;
	}
	string getType()
	{
		return type;
	}
	static int GetCount()
	{
		return count;
	}
};

class pyramid : public luggage
{
private:
	double base, height;
public:
	pyramid(double b, double h)
	{
		base = b;
		height = h;
		type = "Pyramid";
	}
	double getVolume()
	{
		return .3333 * base * height;
	}
	string getType()
	{
		return type;
	}
	static int GetCount()
	{
		return count;
	}
};

class cylinder : public luggage
{
private:
	double radius, length;
public:
	cylinder(double r, double l) 
	{
		radius = r;
		length = l;
		type = "Cylinder";
	}
	double getVolume()
	{
		double pi = 3.1415;
		return pi * pow(radius, 2) * length;
	}
	string getType()
	{
		return type;
	}
	static int GetCount()
	{
		return count;
	}
};

class cube : public luggage
{
private:
	double width;
public:
	cube(double w)
	{
		width = w;
		type = "Cube";
	}
	double getVolume()
	{
		return pow(width, 3);
	}
	string getType()
	{
		return type;
	}
	static int GetCount()
	{
		return count;
	}
};

class cone : public luggage
{
private:
	double radius, height;
public:
	cone(double r, double h)
	{
		radius = r;
		height = h;
		type = "Cone";
	}
	double getVolume()
	{
		double pi = 3.1415;
		return pi * pow(radius, 2) * height * .3333;
	}
	string getType()
	{
		return type;
	}
	static int GetCount()
	{
		return count;
	}
};

class ellipsoid : public luggage
{
private:
	double axis1, axis2, axis3;
public:
	ellipsoid(double a1, double a2, double a3)
	{
		axis1 = a1;
		axis2 = a2;
		axis3 = a3;
		type = "Ellipsoid";
	}
	double getVolume()
	{
		double pi = 3.1415;
		double ratio = 4 / 3;
		return ratio * pi * axis1 * axis2 * axis3;
	}
	string getType()
	{
		return type;
	}
	static int GetCount()
	{
		return count;
	}
};

class hexagonalPrisim : public luggage
{
private:
	double base_edge, height;
public:
	hexagonalPrisim(double be, double h)
	{
		base_edge = be;
		height = h;
		type = "Hexagonal Prisim";
	}
	double getVolume()
	{
		double ratio = (3 / 2) * sqrt(3);
		return ratio * pow(base_edge, 2) * height;
	}
	string getType()
	{
		return type;
	}
	static int GetCount()
	{
		return count;
	}
};

