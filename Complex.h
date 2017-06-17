#pragma once
#include<iostream>
#include <sstream>
#include <string>
using namespace std;

class Complex
{
public:
	//constructors
	Complex();
	Complex(double a);
	Complex(double a, double b);

	//return the complex number
	string toInteger() const;

	//returning the parts of the complex number function
	double getRealPart() const;
	double getImaginaryPart() const;

	//augmented operators
	Complex& operator+=(const Complex& secondComplex);
	Complex& operator-=(const Complex& secondComplex);
	Complex& operator*=(const Complex& secondComplex);
	Complex& operator/=(const Complex& secondComplex);

	//function operator[]
	double& operator[](int index);

	//unary function operators
	Complex operator+();
	Complex operator-();

	//>> and << operators
	friend ostream& operator << (ostream&, const Complex&);
	friend istream& operator >> (istream&, Complex&);

	//nonmember functions
	Complex add(const Complex& secondComplex) const;
	Complex subtract(const Complex& secondComplex) const;
	Complex multiply(const Complex& secondComplex) const;
	Complex divide(const Complex& secondComplex) const;
	double absoluteValue();

	//functions for ++ and --
	Complex& operator++();
	Complex& operator--();
	Complex& operator++(int dummy);
	Complex& operator--(int dummy);
private:
	double a;
	double b;
};

Complex operator+(const Complex& num1, const Complex& r2);
Complex operator-(const Complex& num1, const Complex& r2);
Complex operator*(const Complex& num1, const Complex& r2);
Complex operator/(const Complex& num1, const Complex& r2);