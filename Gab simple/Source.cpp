#include"MAD.h"
#include"Compte_bancaire.h"
#include<iostream>
using namespace std;
using namespace Banque;
void main() {
	Compte_bancaire A("Hicham", *(new MAD(400)));
	int choix;
	double Val;
	MAD* VAL;
	do 
	{
		cout << "0-exit"<<endl;
		cout << "1-retrait"<<endl;
		cout << "2-crediter" << endl;
		cout << "3-consuler" << endl;
		cout << "4-history" << endl;
		cout << "donner votre choix:";
		cin >> choix;
		cout << "------------------------------------------"<<endl;
		switch (choix)
		{
		case 1:
			cout << "donner la valeur en MAD:";
			cin >> Val;
			if (A.debiter(VAL = new MAD(Val)))cout << "Done!" << endl;
			else cout << "Not Enough money"<<endl;
			delete VAL;
			break;
		case 2:
			cout << "donner la valeur en MAD:";
			cin >> Val;
			A.crediter(VAL = new MAD(Val));
			delete VAL;
			break;
		case 3:
			A.consulter();
			break;
		case 4:
			A.Print_with_history();
			break;
		default:
			exit(1);
		}
		cout << "------------------------------------------"<<endl;
	} while (1);
}