#include <iostream>

using namespace std;

int main()
{
	/*
	Дано одновимірний масив. 
	Знайти суму елементів після першого нуля у масиві.
	*/
    {
        const int size = 3;
        int arr[size];
        int Sum , Number;
        for (int i = 0; i < size; i++)
        {
            cout << "arr[" << i + 1 << "] = ";
            cin >> arr[i];
        }
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == 0)
            {
                Number = i;
                break;
            }
        }
        Sum = 0;
        for (int i = Number; i < size; i++)
        {
            Sum += arr[i];
        }
        cout << "\nSum = " << Sum << endl;
    }
    
	cout << endl;
	system("pause");
	return 0;
}