#include <iostream>
#include "teszt.h"
using namespace std;


//void function(int num, int num2, string text) {
//	cout << text << endl;
//}






//string Text() {
//	string a = "Hello";
//	return a;
//}
//
//int MyFunction1() {
//	int num1 = 12;
//	int num2 = 13;
//	return num1 + num2;
//}




//void MyFunction() {
//	int num = 90;
//	cout << num << endl;
//}

//int Plus(int num1, int num2) {
//	return num1 + num2;
//}
int Plus(int num1, int num2) {
	return num1 + num2;
}

double Plus(double num1, double num2) {
	return num1 + num2;
}


int main()
{
	int num1 = 4;
	int num2 = 9;
	double num3 = 7.2;
	double num4 = 98.5;

	//cout << Plus(num3, num4) << endl;

	//Ternary Operation
	int max = (num1 > num2) ? num1 : num2;
	cout << max << endl;

	if (num1 > num2)
	{
		cout << num1 << endl;
	}
	else {
		cout << num2 << endl;

	}


	/*int num = 90;
	function(num, 45, "Hello");*/




	/*int num1 = 89;
	int num2 = 4;


	int result = Plus(67, num2);
	cout << result << endl;*/




	//string text = Text();
	//cout << Text() << endl;
	
	//int test = MyFunction1();
	//cout << MyFunction1 << endl;

	//MyFunction();

}

