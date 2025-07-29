#include <iostream>
using namespace std;

// Volume of cube: side^3
double volume(double side) {
    return side * side * side;
}

// Volume of cylinder: π * r^2 * h
double volume(double radius, double height) {
    const double PI = 3.14159;
    return PI * radius * radius * height;
}

// Volume of rectangular box: length * width * height
double volume(double length, double width, double height) {
    return length * width * height;
}

int main() {
    double side, radius, height, length, width,ht;

    // Cube
    cout << "Enter side of cube: ";
    cin >> side;
    
    // Cylinder
    cout << "Enter radius and height of cylinder: ";
    cin >> radius >> height;
    
    // Rectangular box
    cout << "Enter length, width and height of rectangular box: ";
    cin >> length >> width >> ht;


    cout << "Volume of cube: " << volume(side) << endl;
    cout << "Volume of cylinder: " << volume(radius, height) << endl;
    cout << "Volume of rectangular box: " << volume(length, width, ht) << endl;

    return 0;
}
