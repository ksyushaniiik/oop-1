#include <iostream>
#include "rectangle.hpp"
#include <cmath>

using namespace std;


int main() {
	Rectangle rec(3, 4);
	cout << "площадь прямоугольника: " << rec.area() << endl;
	cout << "периметр прямоугольника: " << rec.perimeter() << endl;
	cout << "диагональ прямоугольника: " << rec.diagonal() << endl;
}