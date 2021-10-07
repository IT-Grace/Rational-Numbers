#include "Rational.h"
#include <iostream>
using std::cout;
using std::endl;

Rational::Rational(int n, int d)
{
	SetRational(n, d);
}

Rational Rational::Add(Rational R) {
	Rational temp, Rtemp, result;
	int num1, num2;

	Rtemp = R;
	temp.nom = nom;
	temp.denom = denom;

	if (denom != R.denom)
	{
		//lcd function
		int lcd = LCD(Rtemp.denom);
		num1 = lcd / temp.denom;
		temp.nom = temp.nom * num1;
		temp.denom = temp.denom * num1;

		num2 = lcd / Rtemp.denom;
		Rtemp.nom = Rtemp.nom * num2;
		Rtemp.denom = Rtemp.denom * num2;
	}
	result.nom = temp.nom + Rtemp.nom;
	result.denom = temp.denom;
	result.simplify();

	return result;	
}

Rational Rational::Sub(Rational R)
{
	Rational Rtemp, temp, result;
	int num1, num2;

	Rtemp = R;
	temp.nom = nom;
	temp.denom = denom;

	if (denom != R.denom)
	{
		//lcd function
		int lcd = LCD(Rtemp.denom);
		num1 = lcd / temp.denom;
		temp.nom = temp.nom * num1;
		temp.denom = temp.denom * num1;

		num2 = lcd / Rtemp.denom;
		Rtemp.nom = Rtemp.nom * num2;
		Rtemp.denom = Rtemp.denom * num2;
	}
	result.nom = temp.nom - Rtemp.nom;
	result.denom = temp.denom;
	result.simplify();

	return result;
}

Rational Rational::Mul(Rational R)
{
	Rational result;
	result.nom = nom * R.nom;
	result.denom = denom * R.denom;
	result.simplify();

	return result;
}

Rational Rational::Div(Rational R)
{
	Rational result;
	result.nom = nom * R.denom;
	result.denom = denom * R.nom;
	result.simplify();

	return result;
}

bool Rational::IsGreater(Rational R)
{
	Rational Rtemp, temp;
	int num1, num2;

	Rtemp = R;
	temp.nom = nom;
	temp.denom = denom;

	if (denom != R.denom)
	{
		//lcd function
		int lcd = LCD(Rtemp.denom);
		num1 = lcd / temp.denom;
		temp.nom = temp.nom * num1;
		temp.denom = temp.denom * num1;

		num2 = lcd / Rtemp.denom;
		Rtemp.nom = Rtemp.nom * num2;
		Rtemp.denom = Rtemp.denom * num2;
	}
	if (temp.nom > Rtemp.nom)
		return true;
	else return false;
}

bool Rational::IsLower(Rational R)
{
	Rational Rtemp, temp;
	int num1, num2;

	Rtemp = R;
	temp.nom = nom;
	temp.denom = denom;

	if (denom != R.denom)
	{
		//lcd function
		int lcd = LCD(Rtemp.denom);
		num1 = lcd / temp.denom;
		temp.nom = temp.nom * num1;
		temp.denom = temp.denom * num1;

		num2 = lcd / Rtemp.denom;
		Rtemp.nom = Rtemp.nom * num2;
		Rtemp.denom = Rtemp.denom * num2;
	}
	if (temp.nom < Rtemp.nom)
		return true;
	else return false;
}

Rational Rational::InBetween(Rational R)
{
	Rational Rtemp, temp, number;
	int num1, num2;

	Rtemp = R;
	temp.nom = nom;
	temp.denom = denom;

	if (denom != R.denom)
	{
		//lcd function
		int lcd = LCD(Rtemp.denom);
		num1 = lcd / temp.denom;
		temp.nom = temp.nom * num1;
		temp.denom = temp.denom * num1;

		num2 = lcd / Rtemp.denom;
		Rtemp.nom = Rtemp.nom * num2;
		Rtemp.denom = Rtemp.denom * num2;
	}	
	if (temp.nom < Rtemp.nom)
		number.nom = (rand() % Rtemp.nom) + temp.nom;
	else
		number.nom = (rand() % temp.nom) + Rtemp.nom;
	number.denom = temp.denom;

	number.simplify();
	return number;
}

void Rational::SetRational(int n, int d)
{
	setNom(n);
	setDenom(d);
}

void Rational::setNom(int n)
{
	nom = n;
}

void Rational::setDenom(int d)
{
	denom = d;
}

int Rational::getNom() const {
	return nom;
}

int Rational::getDenom() const {
	return denom;
}

void Rational::Show() const
{
	cout << getNom() << "/" << getDenom() << endl;

}

void Rational::simplify()
{
	if (nom == denom)
		SetRational(1, 1);
	else {
		int gcd = GCD();
		nom = nom / gcd;
		denom = denom / gcd;
	}
}

int Rational::GCD()
{
	int gcd = 0;
	for (int i = nom; i >= 1; i--)
		if (nom % i == 0 && denom % i == 0)
		{
			gcd = i; break;	
		}
	return gcd;
}

int Rational::LCD(int rdenom)
{
	int greater, lesser;
	if (denom < rdenom)
	{
		lesser = denom;
		greater = rdenom;
	}
	else
	{
		lesser = rdenom;
		greater = denom;
	}

	for (int i = 1; i <= lesser; i++)
	{
		greater = greater * i;
		if (greater % lesser == 0)
			break;
	}
	return greater;
}

