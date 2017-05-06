#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main()
{
	cout << "Please enter your first name: ";

	string name;
	cin >> name;
	 
	const string greeting  = "Hello, " + name + "!";
	
	cout << "Please enter amount of spacing: ";
	int vertPad;
	cin >> vertPad;
	
	const int rows = 2*vertPad + 3;
	for(int r = 0; r < rows; r++)
	{
		const int sidePad = vertPad;
		const string::size_type cols = greeting.size() + sidePad*2 + 2;
		int c = 0;
		cout << endl;

		while(c < cols)
		{
			if(r == vertPad + 1 && c == sidePad + 1)
			{
				cout << greeting;
				c += greeting.size();
			}
			else 
			{
				if(r == 0 || r == rows - 1 || c == 0 || c == cols - 1 )
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
				c++;		
			}
		}
	}
	return 0;
}
