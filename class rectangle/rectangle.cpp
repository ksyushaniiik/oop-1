#include "rectangle.hpp"
#include "cmath"

Rectangle::Rectangle(double Newlength, double Newwidth) {
	length = Newlength;
	width = Newwidth;
}

double Rectangle::perimeter() {
	return 2 * (length + width);
}
double Rectangle::area() {
	return length * width;
}
double Rectangle::diagonal() {
	double sum = length * length + width * width;
	return pow(sum, 0.5);
}