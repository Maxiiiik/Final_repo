#include <iostream>

using namespace std;

int main()
{
	/*
	�������� ��������, ��� ���� �������. 
	�������� ������� �������� ����� �� ���� ����� ����� 
	� ������ lottery � ������� ���������� ��������� ����� � ������� �� 0 �� 9 ��� ������� �������� ������. 
	���������� ������� ������ ���� ����, �� ��� �������� � �������������� ����� � ������ user.
	�������� ������� ������� �������� � ���� ������� �� ���� ��������� ����, �� �������. 
	���������, ����� �������� ����� lottery �� ����� user �� �������� ������, �� ����������� � �������. 
	� ��� ��������� (��������  � ��������� #2 �� #4).
	lottery �����: 7 4 9 1 3
	user �����:     4 2 9 7 3
	�������� ������� ���������� �������� �����, �� ����������� �  
	����� lottery, � ������� ����������� ����. ���� �� ����� ���������, ������� ����������� 
	��� ������������ ����������� ���������� ��������� �����.
	*/
    {
        const int size = 5;
        int arr1[size];
        int arr2[size];
        int �oincided = 0 , Counter;

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
                    �oincided += Counter;
                }
            
        }
        if (�oincided % 5 == 0)
        {
            cout << "\nYou SUPER WINNER!!!!!!";
            cout << "\nCOINCIDED = " << �oincided;
        }
        else
        {
            cout << "\nCoincided = " << �oincided << endl;
            cout << "Luck next time!!"<< endl;
        }
    }
	cout << endl;
	system("pause");
	return 0;
}