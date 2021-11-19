#include "Employee.h"
using namespace std; 
using namespace Entreprise; 

int Employee::NmbreEmployee = 0; 
float Employee::salaireGene = 2500.00; //SMIG cas Maroc


void printblancs(int num)
{
    int ind;
    for (ind = 0; ind < num; ind++)cout << " ";
}

Entreprise::Employee::Employee(const string& nom, float indiceSalarial)
{
    this->nom = nom; 
    this->indiceSalarial = indiceSalarial; 
    
    //on a une methode qui retourne le salaire alors c est pas la peinne de creer 
    // un attribut qui stocke la meme chose 
    this->salaireEmp = calculateSalaire();
    this->matricule = ++NmbreEmployee * 100; 
}

void Entreprise::Employee::PrintEmployee(int ide) const
{
    printblancs(ide);
    cout << "|__Num: " << this->matricule << " ";
    cout << "Sal: " << this->salaireEmp << " ";
    cout << "Nom: " << this->nom << " ";
    cout << "IndS: " << this->indiceSalarial << " ";
    cout << endl; 
}

void Entreprise::Employee::printHearchique(int ide) const
{
    this->PrintEmployee(ide); 
}

float Entreprise::Employee::calculateSalaire() const
{
    return salaireGene * this->indiceSalarial;
}

