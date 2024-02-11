#include <iostream>
#include "rectangle.hpp"
#include <cmath>

using namespace std;


int main() {
	Rectangle rec(3, 4);
	cout << "area of ​​a rectangle : " << rec.area() << endl;
	cout << "perimeter of a rectangle : " << rec.perimeter() << endl;
	cout << "rectangle diagonal : " << rec.diagonal() << endl;
}
