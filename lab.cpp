//
// COMP130 Lab Program
// Programmer: Alex
// Date: October 12, 2016
// Purpose: Quaid, start the reactor.

#define prog 3

#if(prog==1)

#include<iostream>
using namespace std;

int main() {

	cout << "Bubble Sort" << endl;

	const int SIZE = 6;

	int array_charles[SIZE] = {1, 42, 88, 4, 62, 90};

	cout << "Starting Array" << endl;

	for (int i = 0; i < SIZE; i++)
	{
		cout << array_charles[i] << " ";
	}

	cout << endl;

	for (int i = 0; i < SIZE-1; i++)
	{
		cout << "Outer Loop i = " << i << endl;
		cout << array_charles[i] << " ";
		for (int j = SIZE - 1; j >= i; j--)
		{
			cout << "Inner Loop j = " << j << endl;
			cout << array_charles[j] << " ";
		}
		cout << endl;
	}

	return 0;
}

#elif(prog==2)

#include<iostream>
using namespace std;

int main() {

	cout << "Selection Sort" << endl;

	const int SIZE = 5;

	int array_bradbury[SIZE] = { 41, 38, 12, 97, 1 };

	cout << "Starting Array" << endl;

	for (int i = 0; i < SIZE; i++)
	{
		cout << array_bradbury[i] << " ";
	}

	for (int i = 0; i < SIZE - 1; i++)
	{
		int assu_min = array_bradbury[i];
		int sublist_min = array_bradbury[i + 1];
		int idxSubMinValu = i + 1;
		for (int j = i + 2; j < SIZE; j++)
		{
			if (array_bradbury[j] < sublist_min)
			{
				sublist_min = array_bradbury[j];
				idxSubMinValu = i;
			}
		}
		if (assu_min > sublist_min)
		{
			swap(array_bradbury[idxSubMinValu], array_bradbury[i]);
		}

	}

	cout << endl;

	cout << "Sorted Array" << endl;

	for (int i = 0; i < SIZE; i++)
	{
		cout << array_bradbury[i] << " ";
	}

	cout << endl;

	return 0;
}

#elif(prog==3)

#include<iostream>
using namespace std;

void insertionSort(int arrayGun[], int size)
{
	int tempPlaceholder = 0;
	for (int i = 0; i < size - 1; i++)
	{		
		if (arrayGun[i] > arrayGun[i + 1])
		{
			tempPlaceholder = arrayGun[i+1];
			arrayGun[i + 1] = arrayGun[i];
			arrayGun[i] = tempPlaceholder;
		}
	}
}

int main() {
	const int SIZE = 5;
	int arrayGun[SIZE] = { 99,38,12,9,1 };

	cout << "Insertion Sort" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << arrayGun[i] << ' ';
	}

	insertionSort(arrayGun, SIZE);
	cout << "Sorted array" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << arrayGun[i] << ' ';
	}

	return 0;
}

#endif
