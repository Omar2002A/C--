#include <iostream>
#include <cstdlib>
using namespace std;

int RandomNumber(int From, int To)
{
	return rand() % (To - From + 1) + From;
}

void FillArrayWithRandomNumber(int arr[100], int& arrLength)
{
	cout << "\nEnter number of elements ? ";
	cin >> arrLength;

	for (int i = 0; i < arrLength; i++)
		arr[i] = RandomNumber(1, 100);
}

void AddArrayElement(int Number, int arr[100], int& arrLength)
{
	arr[arrLength] = Number;
	arrLength++;
}

void CopyArrayUsingAddArrayElement(int arrSource[100], int arrDestination[100], int arrLength, int& arrDestinationLength)
{
	for (int i = 0; i < arrLength; i++)
		AddArrayElement(arrSource[i], arrDestination, arrDestinationLength);
}

void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";
	cout << endl;
}


int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arrLength = 0, arr2Length = 0;

	FillArrayWithRandomNumber(arr, arrLength);

	int arr2[100];

	CopyArrayUsingAddArrayElement(arr, arr2, arrLength, arr2Length);

	cout << "\nArray 1 elements : \n";
	PrintArray(arr, arrLength);

	cout << "\nArray 2 elements after copy : \n";
	PrintArray(arr2, arr2Length);

	return 0;
}