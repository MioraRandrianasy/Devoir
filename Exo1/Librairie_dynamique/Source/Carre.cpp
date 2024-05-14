
#include <iostream>
#include "../Header/Carre.hpp"
using namespace std;

// Constructeur de la classe carre
Carre::Carre(float x)
{
	cote = x;
}
Carre::~Carre()
{

}
// Acceseur aux données
float Carre::getCote()
{
	return cote;
}

// Mutateur de donnée
void Carre::setCote(float newCote)
{
	cote = newCote;
}


// Affichage de donnée
void Carre::display()
{
	cout << "Carre de: " << "Cote = " << cote << " cm" << endl;
}

// Calcul du perimetre
void Carre::perimetre()
{
    float perimetre = cote*4;
    cout << "le perimetre est: " << perimetre << " cm" << endl;
} 
// Calcul d'aire
void Carre::aire()
{
    float aire = cote*cote;
    cout << "L'aire de ce carre est: " << aire << " cm²" << endl;
}

	