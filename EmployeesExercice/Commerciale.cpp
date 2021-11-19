#include "Commerciale.h"
#include <iostream>

using namespace std; 
using namespace Entreprise; 

// on va prendre 1.4% de total de la vente sera ajoute au salaire de comercial 

Entreprise::Commerciale::Commerciale(const string& nom, float indiceSalarial, list<Vente*> ventes):Employee(nom, indiceSalarial)
{
	this->ventes = ventes;
}

float Entreprise::Commerciale::calculateSalaire() const
{
	float interessement = 0.0; 

	for (Vente* ptrV : this->ventes) {
		interessement += ptrV->totalVente() * 1.4 / 100.0; 
	}
	return this->Employee::calculateSalaire() + interessement;
}

void Entreprise::Commerciale::push_vente(Vente* v)
{
	this->ventes.push_back(v); 
}
