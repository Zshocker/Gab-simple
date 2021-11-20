#pragma once
namespace Banque {
	class MAD
	{
	private:
		double valeur;
	public:
		MAD(double val);
		MAD(const MAD&);
		MAD& operator+(const MAD& M) const;
		MAD& operator-(const MAD& M) const;
		bool operator<=(const MAD& M)const;
		bool operator>=(const MAD& M) const;
		void afficher() const;
	};
};
