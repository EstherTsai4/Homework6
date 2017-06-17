#include<iostream>
#include "Complex.h"
#include <sstream>
#include <cmath>
using namespace std;

//constructors
Complex::Complex()
{
	a = 0;
	b = 0;
}
Complex::Complex(double a)
{
	this->a = a;
	b = 0;
}
Complex::Complex(double a, double b)
{
	this->a = a;
	this->b = b;
}

//returning the parts of the complex number function
double Complex::getRealPart() const
{
	return a;
}
double Complex::getImaginaryPart() const
{
	return b;
}

//augmented operators
Complex& Complex::operator+=(const Complex& secondComplex)
{
	//call the nonmember function add to perform add
	*this = add(secondComplex);
	return *this;
}
Complex& Complex::operator-=(const Complex& secondComplex)
{
	//call the nonmember function subtract to perform subtraction
	*this  = subtract(secondComplex);
	return *this;
}
Complex& Complex::operator*=(const Complex& secondComplex)
{
	//call the nonmember function multiplication to perform multiplication
	*this = multiply(secondComplex);
	return *this;
}
Complex& Complex::operator/=(const Complex& secondComplex)
{
	//call the nonmember function divide to perform division
	*this = divide(secondComplex);
	return *this;
}

//function operator[]
double& Complex::operator[](int index)
{
	if (index == 0)
	{
		return a;
	}
	else
	{
		return b;
	}
}

//unary function operators
Complex Complex::operator+()
{
	//return positive version of complex number
	return *this;
}
Complex Complex::operator-()
{
	//return negative version of complex number (negative a)
	return Complex(-a, b);
}

//>> and << operators
ostream& operator << (ostream& out, const Complex& complex)
{
	//outputs the values of a and b as enter in previously by user
	out << complex.a << " + " << complex.b << "i";
	return out;
}
istream& operator >> (istream& in, Complex& complex)
{
	//inputs value of a and b for each complex number class
	cout << "Enter in the value of a: ";
	in >> complex.a;

	cout << "Enter in the value of b: ";
	in >> complex.b;
	return in;
}

//nonmember functions
Complex Complex::add(const Complex& secondComplex) const
{
	//implement the add function
	double newA = a + secondComplex.getRealPart();
	double newB = b + secondComplex.getImaginaryPart();
	return Complex(newA, newB);
}
Complex Complex::subtract(const Complex& secondComplex) const
{
	//implement the add function
	double newA = a - secondComplex.getRealPart();
	double newB = b - secondComplex.getImaginaryPart();
	return Complex(newA, newB);
}
Complex Complex::multiply(const Complex& secondComplex) const
{
	//implement the add function
	double newA = (a * secondComplex.getRealPart()) - (b*secondComplex.getImaginaryPart());
	double newB = (b * secondComplex.getRealPart())  + (a*secondComplex.getImaginaryPart());
	return Complex(newA, newB);
}
Complex Complex::divide(const Complex& secondComplex) const
{
	//implement the add function
	double newA = (a*secondComplex.getRealPart() + b*secondComplex.getImaginaryPart()) / (secondComplex.getRealPart()*secondComplex.getRealPart() + secondComplex.getImaginaryPart()*secondComplex.getImaginaryPart());
	double newB = (b*secondComplex.getRealPart() - a*secondComplex.getImaginaryPart()) / (secondComplex.getRealPart()*secondComplex.getRealPart() + secondComplex.getImaginaryPart()*secondComplex.getImaginaryPart());
	return Complex(newA, newB);
}

//functions for ++ and --
Complex& Complex::operator++()
{
	//increase complex number by one
	a += 1.0;
	return *this;
}
Complex& Complex::operator--()
{
	//decrease complex number by one
	a -= 1.0;
	return *this;
}
Complex& Complex::operator++(int dummy)
{
	//create temporary object to store already existing object (only changes the temp object but not existing
	Complex temp(a, b);
	//increase number by one
	a += 1.0;
	return temp;
}
Complex& Complex::operator--(int dummy)
{
	//create temporary object to store already existing object (only changes the temp object but not existing)
	Complex temp(a, b);
	//decrease number by one
	a -= 1.0;
	return temp;
}

string Complex::toInteger() const
{
	//turn the complex integer into a string
	stringstream integer;
	integer << "(" << a << " + " << b << "i)";
	return integer.str();
}

double Complex::absoluteValue()
{
	//use equation to calc absolute value of complex number
	double absoluteValue = sqrt(a*a + b*b);
	return absoluteValue;
}

Complex operator+(const Complex& num1, const Complex& r2)
{
	return num1.add(r2);
}
Complex operator-(const Complex& num1, const Complex& r2)
{
	return num1.subtract(r2);
}
Complex operator*(const Complex& num1, const Complex& r2)
{
	return num1.multiply(r2);
}
Complex operator/(const Complex& num1, const Complex& r2)
{
	return num1.divide(r2);
}