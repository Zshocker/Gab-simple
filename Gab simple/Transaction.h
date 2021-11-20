#pragma once
#include"MAD.h"
#include<iostream>
using namespace std;
namespace Banque {
	class Transaction
	{
		static long incr;
		const long numT;
		string date;
		string heure;
		MAD* Val;
		bool Type;//false: out ,true: in
	public:
		Transaction(MAD *Val,bool);
		void Print();
	};
}