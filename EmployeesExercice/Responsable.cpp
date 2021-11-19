#include <iostream>
#include <list>
#include <iterator>
#include "Responsable.h"
#include "Employee.h"


using namespace std; 
using namespace Entreprise; 

void Entreprise::Responsable::pushEmp(Employee* E)
{
	this->subs.push_back(E); 
}

Entreprise::Responsable::Responsable(const string& nom, float indiceSalarial, list <Employee*> subs) :Employee(nom, indiceSalarial)
{
	this->subs = subs; 

} 

void Entreprise::Responsable::printHearchique(int ide) const
{ 
	this->PrintEmployee(ide);
	for (Employee* ptr: this->subs) {
		ptr->printHearchique(ide + 2); 

	}
}
