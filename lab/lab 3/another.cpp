#include <iostream>
using namespace std;

class Rectangle {
    double l, b, h;

public:
    void input() {
        cout << "Enter length, breadth and height of rectangle: ";
        cin >> l >> b >> h;
    }

    void display() {
        cout << "Length: " << l << ", Breadth: " << b << ", Height: " << h << endl;
    }

    // i) Using object as argument
    void addUsingArgument(Rectangle r) {
        Rectangle r3;
        r3.l = l + r.l;
        r3.b = b + r.b;
        r3.h = h + r.h;
        cout << "\n[Using object as argument] Resulting rectangle:\n";
        r3.display();
    }

    // ii) Using function that returns an object
    Rectangle addAndReturn(Rectangle r) {
        Rectangle r3;
        r3.l = l + r.l;
        r3.b = b + r.b;
        r3.h = h + r.h;
        return r3;
    }
};

int main() {
    Rectangle r1, r2, r3;

    cout << "Enter details for first rectangle:\n";
    r1.input();

    cout << "Enter details for second rectangle:\n";
    r2.input();

    // i) Using object as argument
    r1.addUsingArgument(r2);

    // ii) Using function that returns an object
    r3 = r1.addAndReturn(r2);
    cout << "\n[Using function that returns object] Resulting rectangle:\n";
    r3.display();

    return 0;
}
