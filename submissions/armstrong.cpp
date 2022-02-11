#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    int lastdigit;
    cin >> n;

    int sum = 0;
    int originaln = n;
    while (n > 0)
    {
        lastdigit = n % 10;
        sum = sum + lastdigit*lastdigit*lastdigit;
        n = n / 10;
    }

    if (sum == originaln)
    {
        cout << "Armstrong number" << endl;
    }
    else
    {
        cout << "Not armstrong" << endl;
    }

    return 0;
}