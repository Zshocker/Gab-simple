#include "MAD.h"
#include  <iostream>
using namespace std;
using namespace Banque;
MAD::MAD(double val)
{
	this->valeur = val;
}

Banque::MAD::MAD(const MAD&V)
{
	this->valeur = V.valeur;
}

MAD& MAD::operator+(const MAD& M) const
{
	MAD* res = new MAD(this->valeur + M.valeur);
	return *res;
}

MAD& MAD::operator-(const MAD& M) const
{
	MAD* res = new MAD(this->valeur - M.valeur);
	return *res;
}

bool MAD::operator<=(const MAD& M) const
{
	return this->valeur <= M.valeur;
}

bool MAD::operator>=(const MAD& M) const
{
	return this->valeur >= M.valeur;
}

void MAD::afficher() const
{
	cout << this->valeur << " MAD";
}

