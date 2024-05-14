
#include <iostream>
#include "../Header/Sphere.hpp"
#include "../Header/Point3D.hpp"
#define pi 3.14
using namespace std;

Sphere::Sphere()
{
	
}
Sphere::Sphere(Point3D O, float x)
{
	origine = O;
	rayon = x;
}
Sphere::~Sphere()
{
	
}
float Sphere::getRayon()
{
	return rayon;
}
Point3D Sphere::getOrigine()
{
	return origine;
}
void Sphere::setRayon(float newRayon)
{
	rayon = newRayon;
}
void Sphere::setOrigine(Point3D newOrigine)
{
	origine = newOrigine;
}


void Sphere::display()
{
	cout << "Sphere de: " << "centre O" ;
	origine.display();
	cout << "Rayon: " << rayon << " " << "cm" << endl;
}
void Sphere::aire()
{
    float aire = 4*pi*rayon*rayon;
    cout << "L'aire de ce sphere est: " << aire << " cm²" << endl;
}
void Sphere::volume()
{
    float volume = (4/3)*pi*rayon*rayon*rayon;
    cout << "Le volume de ce sphere est: " << volume << " cm³" << endl;
}