
#include <iostream>
#include <list>
#include <iterator>
#include "Employee.h"
#include "Responsable.h"
#include "Vente.h"
#include "Commerciale.h"

using namespace Entreprise; 
using namespace std; 

int main()
{
    Employee* E1 = new Employee("Mohamed", 1.5);
    Employee* E2 = new Employee("Hamid", 1.2);
    Employee* E3 = new Employee("Adil", 1.6);
    list <Employee*> subsM1 = { E1, E2, E3 };
    


    Responsable* M1 = new Responsable("Hassan", 1.9, subsM1); 
    list <Employee*> subsM2 = { E2, E3, M1 };
    Responsable* M2 = new Responsable("Ahrrass", 2, subsM2); 
    list <Employee*> subsM3 = { E2 };
    Responsable* M3 = new Responsable("Hiba", 2, subsM3);
    M2->pushEmp(M3);
    M2->printHearchique(0);

    cout << "\nComerciaux\n"; 
    Vente* v1 = new Vente("ven1", 3, 89.00);
    Vente* v2 = new Vente("ven2", 12, 90.00);
    Vente* v3 = new Vente("ven3", 2, 12.00);
    Vente* v4 = new Vente("ven4", 5, 9.00);

    list <Vente*> ventes = { v1, v3, v4 }; 

    Commerciale* C1 = new Commerciale("com1", 1.2, ventes); 
    cout << C1->calculateSalaire() << endl;
    C1->push_vente(v2);
    cout << C1->calculateSalaire() << endl;
}

