//DZ_C_home_task_dn_arr. Â9Á1_28 . Êàëüìóöêèé


#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

void quickSortR(int[], int);//áûñòðàÿ ñîðòèðîâêà
void FillMass(int [], int[], int[], int);  
int Amount(int arr[], int arr1[], int size);



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
	cout << "\n\n";
	for (int i = 0; i < size1; i++)
	{
		arr3[i] = rand() % 16 +5;
		cout << setw(4) << arr3[i];
	}
	cout << "\n\n\n\n";
	int *ptr1 = 0;
	
	quickSortR(arr2, size1 - 1);
	quickSortR(arr3, size1 - 1);

	//Âûâîä îòñîðòèðîâàíûõ ìàñèâîâ
	for (int i = 0; i < size1; i++)	   
	{
		cout << setw(4) << arr2[i];
	}   	 
	cout << "\n\n";

	for (int i = 0; i < size1; i++)
	{
		cout << setw(4) << arr3[i];
	}
	cout << "\n\n";
	
	amount1 = Amount(arr2, arr3, size1);
	cout << amount1 << endl;

	ptr1 = new int[amount1];
	amount1 = Amount(arr2, arr3, size1);//Êîë-âî ïîâòîðÿþùèõñÿ ýëåìåíòîâ
	
	FillMass(arr2, arr3, ptr1,size1);	//Çàïîëíåíèå

	for (int i = 0; i < amount1; i++)
	{
		cout << setw(4) << ptr1[i];
	}  
	cout << "\n\n";
	delete [] ptr1;	
}


void quickSortR(int a[], int N) {
	// Íà âõîäå - ìàññèâ a[], a[N] - åãî ïîñëåäíèé ýëåìåíò.

	int i = 0, j = N; 		// ïîñòàâèòü óêàçàòåëè íà èñõîäíûå ìåñòà
	int temp, p;

	p = a[N / 2];		// öåíòðàëüíûé ýëåìåíò

						// ïðîöåäóðà ðàçäåëåíèÿ
	do {
		while (a[i] < p) i++;
		while (a[j] > p) j--;

		if (i <= j) {
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			i++;
			j--;
		}

	} while (i <= j);


	// ðåêóðñèâíûå âûçîâû, åñëè åñòü, ÷òî ñîðòèðîâàòü 
	if (j > 0) quickSortR(a, j);
	if (N > i) quickSortR(a + i, N - i);
}

int Amount(int arr[],int arr1[],int size)
{
	int amount = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{

			if (arr[i] == arr1[j] && arr[i] != arr[i + 1])
			{
				amount++;
				break;
			}
		}

	}
	return amount;
}

void FillMass(int arr[],int arr1[],int sumA[], int size)
{
	int k = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (arr[i] == arr1[j] && arr[i] != arr[i + 1])
			{
				sumA[k] = arr1[j];
				k++;
				break;
			}
		}
	}
}