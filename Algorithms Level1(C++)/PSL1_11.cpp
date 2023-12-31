#include <iostream>
using namespace std;

enum enPassFail { Pass = 1, Fail = 2 };

void ReadMarks(int& Mark1, int& Mark2, int& Mark3)
{
	cout << "Enter Mark1 : ";
	cin >> Mark1;

	cout << "Enter Mark2 : ";
	cin >> Mark2;

	cout << "Enter Mark3 : ";
	cin >> Mark3;
}

int SumOf3Marks(int Mark1, int Mark2, int Mark3)
{
	return Mark1 + Mark2 + Mark3;
}

float CalculateAverage(int Mark1, int Mark2, int Mark3)
{
	return float(SumOf3Marks(Mark1, Mark2, Mark3) / 3);
}

enPassFail CheckAverage(float Average)
{
	if (Average >= 50)
		return enPassFail::Pass;
	else
		return enPassFail::Fail;
}

void PrintResults(float Average)
{
	if (CheckAverage(Average) == enPassFail::Pass)
		cout << "\n You Passed :) \n";
	else
		cout << "\n You Failed :( \n";
	cout << "\n The Average = " << Average << endl;
}

int main()
{
	int Mark1, Mark2, Mark3;

	ReadMarks(Mark1, Mark2, Mark3);
	PrintResults(CalculateAverage(Mark1, Mark2, Mark3));

	return 0;
}