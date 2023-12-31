#include <iostream>
using namespace std;

enum enPassFail { Pass = 1, Fail = 2 };

int ReadMark()
{
	int Mark;
	cout << "Please Enter Your Mark ? \n";
	cin >> Mark;
	return Mark;
}

enPassFail CheckMark(int Mark)
{
	if (Mark >= 50)
		return enPassFail::Pass;
	else
		return enPassFail::Fail;
}

void PrintResult(int Mark)
{
	if (CheckMark(Mark) == enPassFail::Pass)
		cout << "\n You Passed :) " << endl;
	else
		cout << "\n You Failed :( " << endl;
}

int main()
{
	PrintResult(ReadMark());
	return 0;
}