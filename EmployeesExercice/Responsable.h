#pragma once
#include "Employee.h"
#include <list>
#include <iterator>



namespace Entreprise {
    class Responsable : public Employee
    {
    private:
        list<Employee*>subs; 
    public:
        void pushEmp(Employee* E); 
        Responsable(const string& nom, float indiceSalarial, list <Employee*> subs);// on a creer un constructeur car on aurra besoin d'initialiser la liste des employes  
        void printHearchique(int ide) const override;
    };
};

