#pragma once
#include <iostream>
#include <list> 
#include <iterator>
#include "Employee.h"
#include "Vente.h"
using namespace std; 

namespace Entreprise {
    class Commerciale : public Employee
    {
    private: 
        list <Vente*> ventes; 
    public:
        Commerciale(const string& nom, float indiceSalarial, list <Vente* > ventes);
        float calculateSalaire() const override;
        void push_vente(Vente* v); 
    };
}; 

