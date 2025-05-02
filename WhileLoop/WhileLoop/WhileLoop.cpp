#include <iostream>
using namespace std;

int main()
{
    int result = 0;
    int num = 0;
    cout << "Enter num: ", cin >> num;
    int i = 1;
    while (i<=num)
    {
        result = result + i;
        i++;
    }
    cout << result << endl;


    /*int num1 = 9;
    int num2 = 8;
    int num3 = 83;
    int num4 = 82;
    int num5 = 1;

    int result = 0;
    result = result + num1;
    result = result + num2;
    result = result + num3;
    cout << result << endl;*/



    /*int i = 0;
    
    while (i<13)
    {
        if (i == 9)
        {
            cout << i << endl;
        }
        
        
        i++;
    }*/




    /*int i = 5;

    while (true)
    {
        if (i < 13)
        {
            cout << "Hello" << endl;
            
        }
        else {
            break;
        }
        i++;
        
    }*/









    /*int num1 = 0;
    while (true)
    {
        if (num1 == 0)
        {
            cout << "Break 1" << endl;
            break;
            cout << "Break 2" << endl;
        }
        else {
            cout << "Continue 1" << endl;
            continue;
            cout << "Continue 2" << endl;
        }
    }*/






    /*bool test = true;
    

    while (test) {
        cout << "Hello" << endl;
        cout << "world" << endl;
        test = false;
    }*/
}

