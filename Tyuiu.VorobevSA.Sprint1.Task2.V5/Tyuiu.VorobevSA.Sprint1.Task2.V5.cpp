// Tyuiu.VorobevSA.Sprint1.Task2.V5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.VorobevSA.Sprint1.Task2.V5.lib/Tyuiu.VorobevSA.Sprint1.Task2.V5.lib.cpp"
#include <math.h>
#include <string>

using namespace std;

int main()
{
    {
        setlocale(LC_ALL, "RUSSIAN");
        cout << "Vorobev\a\t" << "Sergey\t" << "Aleksandrovich\n";
        ISprint0Task7* service2 = new Service2();
        ISprint1Task1* service1 = new Service1();
        cout << "Task2.V5\n";
        int x;
        cout << "Введите трёхзначное число=";
        cin >> x;
        if (service2->Rezalt(x) == true);
        {
            if (x >= service1->Logic(x))
            {
                cout << "Произведение чисел меньше заданного числа=" << service1->Logic(x) << ".\n";
            }
            else
            {
                cout << "Произведение чисел больше заданного числа=" << service1->Logic(x) << endl;
            }

        };
        
    };
}