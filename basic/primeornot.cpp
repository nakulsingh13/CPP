#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, div = 2, flag = 1;
    cout << "Enter the number:";
    cin >> n;

    while (div <= sqrt(n))
    {
        if (n % div == 0)
        {

            flag = 0;
            break;
        }

        div++;
    }
    if (n <= 1)
    {
        flag = 0;
    }

    if (flag == 1)
    {
        cout << "PRIME NUMBER";
    }
    else
    {
        cout << "NOT PRIME";
    }

    return 0;
}