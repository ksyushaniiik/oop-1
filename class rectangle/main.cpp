#include <iostream>
#include "rectangle.hpp"
#include <cmath>

using namespace std;


int main() {
	Rectangle rec(3, 4);
	cout << "������� ��������������: " << rec.area() << endl;
	cout << "�������� ��������������: " << rec.perimeter() << endl;
	cout << "��������� ��������������: " << rec.diagonal() << endl;
}