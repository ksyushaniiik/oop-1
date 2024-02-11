#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
public:
	Rectangle() = default;
	Rectangle(double Newlength, double Newwidth);

	double perimeter();
	double area();
	double diagonal();

private:
	double length{0.0};
	double width{ 0.0 };


};

#endif

