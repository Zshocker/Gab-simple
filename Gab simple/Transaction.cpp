#include "Transaction.h"
using namespace Banque;
long Transaction::incr = 0;
Banque::Transaction::Transaction(MAD* Val,bool type):numT(++incr)
{
	this->Val = new MAD(*Val);
	this->date = __DATE__;
	this->heure = __TIME__;
	this->Type = type;
}

void Banque::Transaction::Print()
{
	cout << "Date : " << date << ", Heure : " << heure << endl;
	cout << "Transaction num: "<<numT << endl;
	cout << "Montant ";
	if (Type)cout << "Resue :";
	else cout << "Retrait :";
	Val->afficher();
	cout << endl;
}
