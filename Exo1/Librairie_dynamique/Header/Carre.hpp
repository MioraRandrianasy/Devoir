#ifndef _CARREHPP
#define _CARREHPP

class Carre{
	public:
		Carre(float x=0);
		~Carre();
		float getCote();
		void setCote(float newCote);
		void display();
		void perimetre();
		void aire();
	protected:
		float cote;	
};
#endif