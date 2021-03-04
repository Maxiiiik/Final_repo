#include <iostream>

using namespace std;

int main()
{
    //1
    /*{
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
    }*/
    //2
    /*{
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
    }*/
    //3
    /*{
        const int size = 5;
        int arr1[size];
        int arr2[size];
        int Ñoincided = 0 , Counter;

        //array User
        cout << "User : " << endl;
        for (int i = 0; i < size; i++)
        {
            cout << "arr[" << i + 1 << "] = ";
            cin >> arr1[i];
        }
        cout << endl;

        //array Lottery
        for (int i = 0; i < size; i++)
        {
            arr2[i] = 0 + rand() % 9;
        }
        cout << endl;

        // Output arrays
        cout << "User arr: ";
        for (size_t i = 0; i < size; i++)
        {
            cout << "\t" << arr1[i];
        }
        cout << endl;
        cout << "Lottery arr: ";
        for (size_t i = 0; i < size; i++)
        {
            cout << "\t" << arr2[i];
        }

        // search coincided
        for (size_t i = 0; i < size; i++)
        {
            Counter = 0;
                if (arr1[i] == arr2[i])
                {
                    Counter++;
                    Ñoincided += Counter;
                }
            
        }
        if (Ñoincided % 5 == 0)
        {
            cout << "\nYou SUPER WINNER!!!!!!";
            cout << "\nCOINCIDED = " << Ñoincided;
        }
        else
        {
            cout << "\nCoincided = " << Ñoincided << endl;
            cout << "Luck next time!!"<< endl;
        }
    }*/
	cout << endl;
	system("pause");
	return 0;
}