#include <iostream>
using namespace std;

int ReadNumber()
{
	int N;
	cout << "Enter Number ? \n";
	cin >> N;
	return N;
	cout << endl;
}

void PowerOf2_3_4(int Number)
{
	int a, b, c;

	a = Number * Number;
	b = Number * Number * Number;
	c = Number * Number * Number * Number;

	cout << a << " " << b << " " << c << endl;
}

int main()
{
	PowerOf2_3_4(ReadNumber());
	return 0;
}