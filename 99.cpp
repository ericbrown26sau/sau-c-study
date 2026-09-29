#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    while(i <= 9)
    {
        int j = 1;
        while(j <= i)
        {
            cout << j << "*" << i << "=" << i*j << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    cout << endl;

    for(int a = 1; a <= 9; a++)
    {
        for(int b = 1; b <= a; b++)
        {
            cout << b << "*" << a << "=" << a*b << " ";
        }
        cout << endl;
    }
    return 0;
}

