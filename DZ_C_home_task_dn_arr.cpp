//DZ_C_home_task_dn_arr. 򬮽_28 . 枢朦祗鲫栝


#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;


int main()
{
	srand(time(0));


	/*int amount=0;		//Task.1
	const int size = 10;
	int arr[size];
	int arr1[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 51 - 25;
		if (arr[i] > 0)
			amount++;
		cout <<setw(4) << arr[i];
	}
	cout << endl;
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		arr1[i] = rand() % 51 - 25;
		if (arr1[i] >0)
			amount++;
		cout << setw(4) << arr1[i];
	}
	cout << endl;
	cout << endl;
	//cout << amount;
	cout << endl;
	cout << endl;
	int *ptr = 0;
	ptr = new int[amount];
	int j = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > 0)
		{
			ptr[j] = arr[i];
			j++;
		}
	}
	for (int i = 0; i <size; i++)
	{
		if (arr1[i] > 0)
		{
			ptr[j] = arr1[i];
			j++;
		}
	}
	for (int i = 0; i < amount; i++)
	{
		cout << setw(4) << ptr[i];
	}
	cout << endl;
	delete [] ptr; */



	int amount1 = 0;		//Task.2
	const int size1 = 10;
	int arr2[size1];
	int arr3[size1];
	for (int i = 0; i < size1; i++)
	{
		arr2[i] = rand() % 16+5;
		cout << setw(4) << arr2[i];
	}
	cout << endl;
	cout << endl;
	for (int i = 0; i < size1; i++)
	{
		arr3[i] = rand() % 16 +5;
		cout << setw(4) << arr3[i];
	}
	cout << endl;
	cout << endl;
	//cout << amount;
	cout << endl;
	cout << endl;
	int *ptr1 = 0;
	ptr1 = new int[amount1];
	int j1 = 0;
	for (int i = 0; i < size1; i++)
	{
		for (int j = 0; j < size1; j++)
			if (arr2[i] == arr3[j])
			{
				for (int k = j; k >=0; k--)
					if (arr3[k] == arr3[j])
					 break; 
				amount1++;
			}
	}
	cout << amount1;
	/*for (int i = 0; i <size; i++)
	{
		if (arr1[i] > 0)
		{
			ptr[j] = arr1[i];
			j++;
		}
	}
	for (int i = 0; i < amount; i++)
	{
		cout << setw(4) << ptr[i];
	}
	cout << endl;
	delete[] ptr;	*/
}