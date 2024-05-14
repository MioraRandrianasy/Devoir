
#include <iostream>
#include "../Header/Rectangle.hpp"
using namespace std;

Rectangle::Rectangle(float x, float y)
{
	longueur = x;
	largeur = y;
}
Rectangle::~Rectangle()
{

}

float Rectangle::getLongueur()
{
	return longueur;
}
float Rectangle::getLargeur()
{
	return largeur;
}
void Rectangle::setLongueur(float newLongueur)
{
	longueur = newLongueur;
}
void Rectangle::setLargeur(float newLargeur)
{
	largeur = newLargeur;
}

void Rectangle::display()
{
	cout << "Rectangle de: " << "longueur = " << longueur << " cm" << " et " << "largeur: " << largeur << " cm" << endl;
}

void Rectangle::perimetre()
{
    float perimetre = (longueur+largeur)*2;
    cout << "le perimetre est: " << perimetre << " cm" << endl;
} 
void Rectangle::aire()
{
    float aire = longueur*largeur;
    cout << "L'aire de ce rectangle est: " << aire << " cm²" << endl;
}

	
