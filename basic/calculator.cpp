#include <iostream>
using namespace std;

int main()
{
    float a, b;
    cout << "Input value of a and b :";
    cin >> a >> b;

    char op;
    cout << "Input operation:";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        cout << a / b << endl;
        break;

    default:
        cout << "Enter another operation" << endl;
        break;
    }
}
