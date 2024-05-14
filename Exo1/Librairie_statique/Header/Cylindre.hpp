#ifndef _CYLINDREHPP
#define _CYLINDREHPP
#include "./Point.hpp"
#include "./Cercle.hpp"
class Cylindre{
	public:
		Cylindre(Cercle c, float z);
		~Cylindre();
		Cercle getBase();
		float getHauteur();
		void setBase(Cercle newBase);
		void setHauteur(float newHauteur);
		void display();
		void volume();
		void aire();
	protected:
		Cercle base;
		float hauteur;
};
#endif
