#include <iostream>

using namespace std;

int main() {
    // 1. Implicit Typecasting (Automatic conversion)
    int intVar = 10;
    double doubleVar = intVar; // Integer automatically converts to double
    cout << "Implicit Typecasting: " << doubleVar << endl;

    // 2. Explicit Typecasting (Manual conversion)
    double num = 10.75;
    int convertedNum = (int) num;  // C-style casting
    cout << "Explicit Typecasting (C-style): " << convertedNum << endl;

    // 3. Static_cast<> (Recommended for explicit type conversion)
    double value = 12.56;
    int intValue = static_cast<int>(value);
    cout << "Explicit Typecasting (static_cast<>): " << intValue << endl;

    return 0;
}
