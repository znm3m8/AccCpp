#include <iostream>

using namespace std;

int main()
{
	int first;
	int second;

	cout << "Please enter first number: ";
	cin >> first;

	cout << "Please enter second number: ";
	cin >> second;

	cout << "The larger number is " << (first>second ? first : second) << ".";

}
