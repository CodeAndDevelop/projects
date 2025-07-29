////2. wap that converts the temepearture in degree centrigrade to degree fahrenheit and vice versa 
//using the concept of classes and object. Make seperate
////classes for the centirgrade and fahrenheit which has private
// member to hold value and add conversion function in each class from centrigrade to fahrenheit.
#include <iostream>
using namespace std;

class fahrenheit; // Forward declaration

class centrigrade {
    float c;

public:
    centrigrade(int x = 0) {
        c = x;
    }

    friend class fahrenheit;

    void conversion(fahrenheit temp);
};

class fahrenheit {
    float f;

public:
    fahrenheit(int y = 0) {
        f = y;
    }

    friend class centrigrade;

    void conversion(centrigrade temp) {
        fahrenheit t;
        t.f = temp.c * (9.0 / 5) + 32;  // Fixed: floating-point division
        cout << temp.c << " Celsius is " << t.f << " Fahrenheit" << endl;
    }
};



int main() {
    fahrenheit f1(95);
    centrigrade c1(35);

    f1.conversion(c1); // Convert Celsius to Fahrenheit
    c1.conversion(f1); // Convert Fahrenheit to Celsius

    return 0;
}

