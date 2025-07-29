#include <iostream>
using namespace std;

// Function with default argument for count
void printChar(char ch, int times = 1) {
    for (int i = 0; i < times; i++) {
        cout << ch;
    }
    cout << endl;
}

int main() {
    char symbol;
    int count;

    cout << "Enter a character to print: ";
    cin >> symbol;

    cout << "Enter how many times to print it (or 0 to use default): ";
    cin >> count;

    if (count == 0) {
        printChar(symbol);  // Uses default value of 1
    } else {
        printChar(symbol, count);
    }

    return 0;
}
