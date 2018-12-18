#include <iostream>
#include <string>
using namespace std;

void deleteString()
{
    string message;
	int first, length;
	cout << "Enter a string:";
	getline(cin,message);
	cout << "Enter starting position:";
	cin >> first;
	cout << "Enter the size:";
	cin >> length;
	message.erase(first,length);
	cout << message << endl;
}

int main()
{
	deleteString();
	return 0;
}

