/* file: cyl_s_area_cpp.cpp
Example Program #1
This program calculates the surface area
of a closed cylinder of radius r and height h */

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	
	// set the value for PI
	const double PI = 3.14159;

	// define variables for radius and height
	double r, h;

	// define variables for top, bottom, side, and total surface areas
	double s_area_top, s_area_bottom, s_area_side, surface_area;

	// input radius and height
	r = 3.2;
	h = 5.7;

	// calculate all surface areas
	s_area_top = PI * r * r;
	s_area_bottom = PI * r * r;
	s_area_side = 2.0 * PI * r * h;
	surface_area = s_area_top + s_area_bottom + s_area_side;

	// output total surface area
	cout << "The total surface area of the cylidner is " << surface_area << " square units." << endl;

	system("PAUSE");

	return 0;

}

/* OUTPUT
The total surface area of the cylidner is 178.945 square units. */
