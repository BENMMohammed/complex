#include "Complex.h"
#include <math.h>
#include <iostream>

using namespace std;
void Complex::afficher()
{
	cout << this->re << " +i" << this->img << endl;
}

Complex::Complex(double re, double img)
{
	this->re = re; 
	this->img = img;
	this->tab = new int[3];
}

Complex::Complex()
{
	this->re = 0;
	this->img = 0;
}

Complex::Complex(double re)
{
	this->re = re; 
	this->img = 0;
}

Complex Complex::add(Complex z2)
{
	Complex res;
	res.re = this->re + z2.re; 
	res.img = this->img + z2.img;
	return res;
}

double Complex::module()
{
	double res; 
	res = sqrt(pow(this->re,2)+pow(this->img,2));
	return res;
}

Complex::~Complex()
{
	cout << "deleted" << endl;
	delete this->tab;
	this->tab = nullptr;
}

Complex SUM(Complex z1, Complex z2)
{
	Complex res;
	res = z1.add(z2);
	return res;
}
