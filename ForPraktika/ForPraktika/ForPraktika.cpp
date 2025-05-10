#include <iostream>
using namespace std;



int main()
{
    // User vvodit dlinu kateta ravnobedrennovo treuqolnika, na ekran vivoditsa treuqolnik iz *
    int length = 0;
    cout << "Enter length: ", cin >> length;
    for (int i = 0; i <= length; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i<= length; i++)
    {
        for (int j = length; j >= i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}
