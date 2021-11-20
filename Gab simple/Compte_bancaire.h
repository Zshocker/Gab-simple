#pragma once
#include"Transaction.h"
#include<vector>
using namespace std;
namespace Banque {
	class Compte_bancaire
	{
		string Nom;
		MAD* Solde;
		vector<Transaction*> Trans;
	public:
		Compte_bancaire(string nom, MAD& R);
		void crediter(MAD* M);
		bool debiter(MAD* M);
		bool verser(MAD* M, Compte_bancaire & C);
		void consulter()const;
		void Print_with_history();
		~Compte_bancaire();
	};
}
