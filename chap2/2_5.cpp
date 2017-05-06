#include <iostream> 
#include <string>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main()
{
	//square
	cout << "Enter square size: ";
	int sqSize;
	cin >> sqSize;

	for(int i = 0; i < sqSize; i++)
	{
		int j = 0;
		while(j < sqSize)
		{
			if(i == 0 || i == sqSize - 1)
			{
				const string lines(sqSize, '-');
				cout << lines;
				j += sqSize;
			}
			else
			{
				if(j == 0 || j == sqSize -1)
				{
					cout << '|';
					j++;
				}
				else
				{
					const string spaces(sqSize - 2, ' ');
					cout << spaces;
					j += sqSize - 2;
				}
			}
		}
		cout << endl;
	}

	//rectangle

	cout << "Enter rectange width: ";
	int rectW;
	cin >> rectW;

	cout << "Enter rectange height: ";
	int rectH;
	cin >> rectH;


	for(int i = 0; i < rectH; i++)
	{
		int j = 0;
		while(j < rectW)
		{
			if(i == 0 || i == rectH - 1)
			{
				const string lines(rectW, '-');
				cout << lines;
				j += rectW;
			}
			else
			{
				if(j == 0 || j == rectW - 1)
				{
					cout << '|';
					j++;
				}
				else
				{
					const string spaces(rectW - 2, ' ');
					cout << spaces;
					j += rectW - 2;
				}
			}
		}
		cout << endl;
	}

	//triangle

	cout << "Enter triangle size: ";
	cin >> sqSize;

	for(int i = 0; i < sqSize; i++)
	{
		for(int j = 0; j < i+1; j++)
		{
			if(j == i)
			{
				cout << "\\";
			}
			else
			{
				if(j == 0)
				{
					cout << "|";
				}
				else
				{
					if(i == sqSize - 1)
					{
						cout << '-';
					}
					else
					{
						cout << ' ';
					}
				}
			}
		}
		cout << endl;
	}



	return 0;
}
