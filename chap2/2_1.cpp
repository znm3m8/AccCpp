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
	
	const int pad = 0;
	const int rows = 2*pad + 3;
	for(int r = 0; r < rows; r++)
	{
		const string::size_type cols = greeting.size() + pad*2 + 2;
		int c = 0;
		cout << endl;

		while(c < cols)
		{
			if(r == pad + 1 && c == pad + 1)
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
