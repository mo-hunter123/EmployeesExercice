#pragma once
#include <iostream>
#include <assert.h>
#include <string>

using namespace std; 

namespace Entreprise {

	class Employee
	{
	
		static float salaireGene; 
		static int NmbreEmployee; 
	private:
		string nom; 
		unsigned long int matricule; // ++nmbrEmployee*100 (unique)
		float indiceSalarial; 
		float salaireEmp; 

	public:
		//Employee();
		Employee(const string& nom, float indiceSalarial);
		// pour eviter de cloner le meme employee 
		Employee(const Employee&) = delete; 
		void PrintEmployee(int ide) const;
		virtual void printHearchique(int ide) const;
		virtual  float calculateSalaire() const;
	};
};
