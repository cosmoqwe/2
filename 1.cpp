#include<iostream>
#include<ctime>
using namespace std;
void main()
{
	srand(time(NULL));
	const int size = 5;
	const int size2 = 5;
	int icq[size];
	int phone[size2];
	for (int i = 0; i < size; i++)
	{
		icq[i] = 2537392 + rand() % 9999999;
		cout << icq[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < size2; i++)
	{
		phone[i] = 6812345 + rand() % 9912345;
		cout << phone[i] << " ";
	}
	cout << endl << endl;
	for (int i = 0; i < size-1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (icq[j] > icq[j + 1])
			{
				int temp = icq[j];
				icq[j] = icq[j + 1];
				icq[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < size; i++)
	{
		cout << icq[i] << " ";
	}
	cout << endl << endl;
	for (int i = 0; i < size2 - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (phone[j] > phone[j + 1])
			{
				int temp2 = phone[j];
				phone[j] = phone[j + 1];
				phone[j + 1] = temp2;
			}
		}
	}
	for (int i = 0; i < size2; i++)
	{
		cout << phone[i] << " ";
	}
}