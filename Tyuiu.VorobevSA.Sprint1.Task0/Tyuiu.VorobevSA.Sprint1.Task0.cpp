// Tyuiu.VorobevSA.Sprint1.Task0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.VorobevSA.Sprint1.Task0.Lib/Tyuiu.VorobevSA.Sprint1.Task0.Lib.cpp"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    cout << "Vorobev\a\t" << "Sergey\t" << "Aleksandrovich\n";
    cout << endl;
    ISprint1Task0V01* service1 = new Service1();
    cout << "Task0.V1\n";
    int a, b, c;
    cout << "Введите Ширину="; cin >> a;
    cout << "Введите Длинну="; cin >> b;
    cout << "Введите Высоту="; cin >> c;
    cout << "Ответ= " << service1->Rezalt(a, b, c);

    cout << "\n" << endl;

    ISprint1Task0V01* service2 = new Service2();
    cout << "Task0.V2\n";
    cout << "Введите Ширину="; cin >> a;
    cout << "Введите Длинну="; cin >> b;
    cout << "Введите Высоту="; cin >> c;
    cout << "Ответ= " << service2->Rezalt(a, b, c);

    cout << "\n" << endl;

    ISprint1Task0V00* service3 = new Service3();
    cout << "Task0.V3\n";
    cout << "Введите 1 число="; cin >> a;
    cout << "Введите 2 число="; cin >> b;
    cout << "Ответ= " << service3->Calculate(a, b);

    cout << "\n" << endl;

    ISprint1Task0V00* service4 = new Service4();
    cout << "Task0.V4\n";
    cout << "Введите ширину="; cin >> a;
    cout << "Введите длинну="; cin >> b;
    cout << "Ответ= " << service4->Calculate(a, b);

    cout << "\n" << endl;

    ISprint1Task0V01* service5 = new Service5();
    cout << "Task0.V5\n";
    cout << "Введите 1 число="; cin >> a;
    cout << "Введите 2 число="; cin >> b;
    cout << "Введите 3 число="; cin >> c;
    cout << "Ответ= " << service5->Rezalt(a, b, c);
};