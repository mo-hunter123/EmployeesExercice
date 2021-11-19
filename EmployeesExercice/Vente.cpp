#include "Vente.h"
using namespace std; 

Vente::Vente(string titre, int qte, float prixUnitaire)
{
	this->prixUnitaire = prixUnitaire; 
	this->qte = qte; 
	this->titre = titre; 
}

void Vente::printVente() const
{
	cout << "titre: " << this->titre << " prix: " << this->prixUnitaire << " qte: " << this->qte << endl; 

}

float Vente::totalVente() const
{
	return this->qte * this->prixUnitaire;
}
