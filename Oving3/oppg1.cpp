#include <iostream>

using namespace std;

const double pi = 3.141592;

class Circle {
public:
    Circle(double radius_);
    double get_area() const;
    double get_circumference() const;
private:
    double radius;
};

// ==> Implementasjon av klassen Circle

Circle::Circle(double radius_) : radius(radius_) {}

double Circle::get_area() const {  // skiftet denne til double også fordi pi * radius * radius vil bli eit desimaltall
    return pi * radius * radius;
}

double Circle::get_circumference() const {
    return 2.0 * pi * radius;
}

int main() { // oppgave 2
    Circle circle(5);
    double area = circle.get_area();
    cout << "Arealet er lik " << area << endl;

    double circumference = circle.get_circumference();
    cout << "Omkretsen er lik " << circumference << endl;
}