#pragma once
#include <iostream>
#include <string>

using namespace std; 

class Vente
{
private: 
	string titre;
	int qte; 
	float prixUnitaire; 
public:
	Vente(string titre, int qte, float prixUnitaire);
	void printVente() const;
	float totalVente() const; 

};

