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
    cout << "������� ������="; cin >> a;
    cout << "������� ������="; cin >> b;
    cout << "������� ������="; cin >> c;
    cout << "�����= " << service1->Rezalt(a, b, c);

    cout << "\n" << endl;

    ISprint1Task0V01* service2 = new Service2();
    cout << "Task0.V2\n";
    cout << "������� ������="; cin >> a;
    cout << "������� ������="; cin >> b;
    cout << "������� ������="; cin >> c;
    cout << "�����= " << service2->Rezalt(a, b, c);

    cout << "\n" << endl;

    ISprint1Task0V00* service3 = new Service3();
    cout << "Task0.V3\n";
    cout << "������� 1 �����="; cin >> a;
    cout << "������� 2 �����="; cin >> b;
    cout << "�����= " << service3->Calculate(a, b);

    cout << "\n" << endl;

    ISprint1Task0V00* service4 = new Service4();
    cout << "Task0.V4\n";
    cout << "������� ������="; cin >> a;
    cout << "������� ������="; cin >> b;
    cout << "�����= " << service4->Calculate(a, b);

    cout << "\n" << endl;

    ISprint1Task0V01* service5 = new Service5();
    cout << "Task0.V5\n";
    cout << "������� 1 �����="; cin >> a;
    cout << "������� 2 �����="; cin >> b;
    cout << "������� 3 �����="; cin >> c;
    cout << "�����= " << service5->Rezalt(a, b, c);
};