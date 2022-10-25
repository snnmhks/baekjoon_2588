#include <iostream>

using namespace std;

int main()
{
	int num1 = 0;
	int num2 = 0;
	cin >> num1;
	cin >> num2;

	int FirstNum = num2 % 10;
	int SecondNum = (num2 / 10) % 10;
	int ThirdNum = (num2 / 100) % 10;

	cout << num1 * FirstNum << endl;
	cout << num1 * SecondNum << endl;
	cout << num1 * ThirdNum << endl;
	cout << num1 * FirstNum + num1 * SecondNum * 10 + num1 * ThirdNum * 100;
}