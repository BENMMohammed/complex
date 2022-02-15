#pragma once
class Complex
{

private : 
	double re; 
	double img; 
	int* tab; 

public :
	void afficher();
	Complex(double re, double img);
	Complex();
	Complex(double re);
	Complex add( Complex z2);
	double module();
     ~Complex(); 
	 
};
// 
Complex SUM(Complex z1,Complex z2);

