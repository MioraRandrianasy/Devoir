#ifndef _CPOINTHPP
#define _CPOINTHPP
#include "./Point.hpp"
class Point3D:public Point {
	public:
		Point3D();
		Point3D(float abs, float ord, float z);
		~Point3D();
		void display();
		void setZ(float newZ);
	protected:
		float z;
};

#endif
