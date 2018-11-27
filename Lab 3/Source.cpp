#include <iostream>
#include <cmath>
using namespace std;

class GeometryFigure {
protected:
	double r1;
	double r2;
public:
	virtual double getArea() = 0;
	virtual double getPerimeter() = 0;
};

class Circle: public GeometryFigure {
public:
	virtual double getArea() {
		return r1 * r2 * 3.14;
	}
	virtual double getPerimeter() {
		return 2 * r1 * 3.14;
	}
	Circle(double radius) { r1 = radius; r2 = radius; }
};

class Elipse : public GeometryFigure {
public:
	virtual double getArea() {
		return r1 * r2 * 3.14;
	}
	virtual double getPerimeter() {
		return 2 * 3.14 * sqrt((pow(r1, 2) + pow(r2, 2))/2);
	}
	Elipse(double radius1, double radius2) { r1 = radius1; r2 = radius2; }
};

class Ring :public GeometryFigure {
public:
	virtual double getArea() {
		return abs((pow(r1, 2) - pow(r2, 2))) * 3.14;
	}
	virtual double getPerimeter() {
		return 2 * 3.14 * r1 > r2 ? r1 : r2;
	}
	Ring(double radius1, double radius2) { r1 = radius1; r2 = radius2; }
};
int main() {
	GeometryFigure* a = new Circle(8);
	GeometryFigure* a = new Elipse(8, 10);
	GeometryFigure* a = new Ring(9, 13);
	cout << fixed << a->getArea() << endl;
	system("pause");
	return 0;
}