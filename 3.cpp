#include <iostream>

using namespace std;

int main()
{
	/*
	Напишіть програму, яка імітує лотерею. 
	Програма повинна створити масив із п’яти цілих чисел 
	з іменем lottery і повинна генерувати випадкове число в діапазоні від 0 до 9 для кожного елемента масиву. 
	Користувач повинен ввести п’ять цифр, які слід зберігати у цілочисельному масиві з іменем user.
	Програма порівнює відповідні елементи у двох масивах та веде підрахунок цифр, які співпали. 
	Наприклад, нижче показано масив lottery та масив user із номерами зразків, що зберігаються в кожному. 
	Є два співпадіння (елементи  з індексами #2 та #4).
	lottery масив: 7 4 9 1 3
	user масив:     4 2 9 7 3
	Програма повинна відображати випадкові числа, що зберігаються в  
	масиві lottery, і кількість співпадаючих цифр. Якщо всі цифри збігаються, виведіть повідомлення 
	про проголошення користувача переможцем головного призу.
	*/
    {
        const int size = 5;
        int arr1[size];
        int arr2[size];
        int Сoincided = 0 , Counter;

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
                    Сoincided += Counter;
                }
            
        }
        if (Сoincided % 5 == 0)
        {
            cout << "\nYou SUPER WINNER!!!!!!";
            cout << "\nCOINCIDED = " << Сoincided;
        }
        else
        {
            cout << "\nCoincided = " << Сoincided << endl;
            cout << "Luck next time!!"<< endl;
        }
    }
	cout << endl;
	system("pause");
	return 0;
}