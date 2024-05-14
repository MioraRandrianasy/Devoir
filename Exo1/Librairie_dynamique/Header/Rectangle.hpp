#ifndef _RECTANGLEHPP
#define _RECTANGLEHPP

class Rectangle{
	public:
		Rectangle(float x=0,float y=0);
		~Rectangle();
		float getLongueur();
		float getLargeur();
		void setLongueur(float newLongueur);
		void setLargeur(float newLargeur);
		void display();
		void perimetre();
		void aire();
	protected:
		float longueur, largeur;	
};
#endif
