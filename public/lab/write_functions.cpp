#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <cmath>

using namespace std;

/**
Computes the volume of a sphere.
@param r is the radius of the sphere.
@return the volume_sphere
*/
double sphere_volume(double r) {
	const double PI = M_PI;
	double volume_sphere = 4.0 / 3 * PI * pow(r, 3);
	return volume_sphere;
}
/**
Computes the surface area of a sphere.
@param r is the radius of the sphere.
@return the sphere_area
*/
double sphere_surface(double r) {
	const double PI = M_PI;
	double sphere_area = 4 * PI * pow(r, 2);
	return sphere_area;
}

/**
Computes the volume of a cylinder.
@param r and h. r is radius h is height.
@return cyl_vol
*/
double cylinder_volume(double r, double h) {
	const double PI = M_PI;
	double cyl_vol = PI * pow(r, 2) * h;
	return cyl_vol;
}

int main()
{
	cout << "Enter values for radius and height and hit enter \nkey to execute the program (example: 2 4; r=2 & h=4): "
		<< " ";
	double radius;
	double height;
	cin >> radius >> height;
	
	cout << "Volume of the sphere is: " << sphere_volume(radius) << endl;
	cout << "Surface area of the sphere is: " << sphere_surface(radius) << endl;
	cout << "Volume of the cylinder is: " << cylinder_volume(radius, height) << endl;

	system("pause");
	return 0;
}
