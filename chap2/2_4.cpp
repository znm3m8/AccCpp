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
	
	cout << "Please enter amount of vertical spacing: ";
	int vertPad;
	cin >> vertPad;

	cout << "Please entern amount of side spacing: ";
	int sidePad;
	cin >> sidePad;
	
	const int rows = 2*vertPad + 3;
	for(int r = 0; r < rows; r++)
	{
		const string::size_type cols = greeting.size() + sidePad*2 + 2;
		int c = 0;
		cout << endl;

		while(c < cols)
		{
			if(r == vertPad + 1)
			{
				if(c == sidePad + 1)
				{
					cout << greeting;
					c += greeting.size();
				}
				else
				{
					if(c == 0 || c == cols - 1)
					{
						cout << '*';
						c++;
					}
					else
					{
						const string spaces(sidePad, ' ');
						cout << spaces;
						c += sidePad;
					}
				}
			}
			else 
			{
				if(r == 0 || r == rows - 1)
				{
					const string stars(cols, '*');		
					cout << stars;
					c += cols;
				}
				else
				{
					if(c == 0 || c == cols - 1)
					{
						cout << '*';
						c++;
					}
					else
					{
						const string spaces(cols - 2, ' ');
						cout << spaces;
						c += cols - 2;
					}
				}	
			}
		}
	}
	return 0;
}
