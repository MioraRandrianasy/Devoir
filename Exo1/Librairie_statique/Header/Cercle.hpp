#ifndef _CERCLEHPP
#define _CERCLEHPP

#include "./Point.hpp"
class Cercle{
	public:
		Cercle(Point O, float x);
		Cercle();
		~Cercle();
		float getRayon();
		Point getOrigine();
		void setRayon(float newRayon);
		void setOrigine(Point newOrigine);
		void display();
		void circonference();
		void aire();
	protected:
		Point origine;
		float rayon;
};
#endif
