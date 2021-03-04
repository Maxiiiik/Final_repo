#include <iostream>

using namespace std;

int main()
{
    /*
	Напишите программу, которая выполняет 
	поэлементную сумму двух массивов и результат заносит в третий массив.
	*/
    {
        const int size = 2;
        int arr1[size];
        int arr2[size];
        int arrSum[size];
        cout << "Arr 1: " << endl;
        for (int i = 0; i < size; i++)
        {
            arr1[i] = 1 + rand() % 15;
            cout << "\t" << arr1[i] << " ";
        }
        cout << endl;
        cout << "Arr 2: " << endl;
        for (int i = 0; i < size; i++)
        {
            arr2[i] = 1 + rand() % 9;
            cout << "\t" << arr2[i] << " ";
        }
        cout << endl;
        cout << "\nSum arr1 + arr2: " << endl;
        for (int i = 0; i < size; i++)
        {
            arrSum[i] = arr1[i] + arr2[i];
            cout << "arrSum = ";
            cout << arrSum[i] << "\n";
        }
    }
    
	cout << endl;
	system("pause");
	return 0;
}