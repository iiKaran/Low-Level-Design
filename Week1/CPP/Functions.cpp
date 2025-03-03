#include <iostream>

using namespace std;

// 1. Function with No Arguments & No Return Type
void greet() {
    cout << "Hello! Welcome to C++ functions." << endl;
}

// 2. Function with Arguments & No Return Type
void printSum(int a, int b) {
    cout << "Sum: " << a + b << endl;
}

// 3. Function with Arguments & Return Type
int multiply(int x, int y) {
    return x * y;
}

// 4. Function Overloading (Same function name, different parameters)
int add(int a, int b) { 
    return a + b; 
}

double add(double a, double b) { 
    return a + b; 
}

// 5. Inline Function (Faster execution for small functions)
inline int square(int num) {
    return num * num;
}

int main() {
    // Calling functions
    greet();

    printSum(5, 10);

    int product = multiply(4, 5);
    cout << "Product: " << product << endl;

    cout << "Addition (int): " << add(10, 20) << endl;
    cout << "Addition (double): " << add(10.5, 20.7) << endl;

    cout << "Square of 6: " << square(6) << endl;

    return 0;
}
