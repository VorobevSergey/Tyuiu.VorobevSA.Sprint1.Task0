// Tyuiu.VorobevSA.Sprint1.Task3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.VorobevSA.Sprint1.Task3.lib/Tyuiu.VorobevSA.Sprint1.Task3.lib.cpp"
#include <string>

using namespace std;


int main()
{
    setlocale(LC_ALL, "RUSSIAN");
    cout << "Воробьев\a\t" << "Сергей\t" << "Александрович\n";
    ISprint0Task7* service1 = new Service1();
    cout << "Task3\n";
    int x;
    cout << "Введите четырех значное число=";
    cin >> x;
    if (service1->Rezalt(x) == true)
    {
        cout << "Ответ=" << x * 2;
    }
    else
    {
        cout << "ответ=" << x / 5;
    }


}
