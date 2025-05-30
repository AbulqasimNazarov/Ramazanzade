#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;



int main()
{
    int selected = 0;
    string arr[3]{ "Start", "Add", "Exit" };
    while (true)
    {
        //system("cls");
        for (int i = 0; i < 3; i++)
        {
            cout << arr[i] << endl;
        }
        int key = _getch();
        
    }











    // User vvodit dlinu kateta ravnobedrennovo treuqolnika, na ekran vivoditsa treuqolnik iz *
    /*int length = 0;
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
    }*/
}
