#include "Compte_bancaire.h"
#include<assert.h>
Banque::Compte_bancaire::Compte_bancaire(string nom, MAD& R)
{
	MAD A200(200);
	assert(R >= A200);
	this->Nom = nom;
	this->Solde = new MAD(R);
}
void Banque::Compte_bancaire::crediter(MAD* M)
{
	*(this->Solde) = *(this->Solde) + *M;
	Trans.push_back(new Transaction(new MAD(*M),true));
}

bool Banque::Compte_bancaire::debiter(MAD* M)
{
	MAD A200(200);
	if (*(this->Solde) >= *M && (*(Solde)-*M)>=A200)
	{
		*(this->Solde) = *(this->Solde) - *M;
		Trans.push_back(new Transaction(new MAD(*M), false));
		return true;
	}
	return false;
}
bool Banque::Compte_bancaire::verser(MAD* M, Compte_bancaire& C)
{
	if (this->debiter(M))
	{
		C.crediter(M);
		return true;
	}
	return false;
}


void Banque::Compte_bancaire::consulter() const
{
	cout << "Nom :"<<Nom << endl;
	this->Solde->afficher();
	cout << endl;
}

void Banque::Compte_bancaire::Print_with_history()
{
	consulter();
	for (int i = 0; i < Trans.size(); i++)
	{
		Trans[i]->Print();
	}
}

Banque::Compte_bancaire::~Compte_bancaire()
{
	delete this->Solde;
}
