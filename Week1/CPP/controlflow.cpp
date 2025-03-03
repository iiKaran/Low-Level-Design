#include <iostream>
using namespace std;
int main()
{
    // if else
    int age = 18;
    if (age > 18)
    {
        cout << "can vote" << endl;
    }
    else if (age == 18)
    {
        cout << "ready to give first vote" << endl;
    }
    else
    {
        cout << "cant vote";
    }

    char x = 'A';

    // Switch statement with three cases
    switch (x)
    {
    case 'A':
        cout << "A";
        break;
    case 'B':
        cout << "B";
        break;
    default:
        cout << "Other than A and B";
        break;
    }

    // loops
    cout << endl
         << "for loop" << endl;
    // for , do while , while(basic sytax)
    for (int i = 0; i < 5; i++)
    {
        cout << "Iteration: " << i << endl;
    }
    cout << endl
         << "while" << endl;
    int i = 0;
    while (i < 5)
    {
        cout << "Iteration: " << i << endl;
        i++;
    }
    cout << endl
         << "dowhile" << endl;
        
    do
    {
        cout << "Iteration: " << i << endl;
        i++;
    } while (i < 5);
    return 0;
}