// Tyuiu.VorobevSA.Sprint1.Task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.VorobevSA.Sprint1.Task1.Lib/Tyuiu.VorobevSA.Sprint1.Task1.Lib.cpp"
#include <math.h>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUSSIAN");
    cout << "��������\a\t" << "������\t" << "�������������\n";
    ISprint1Task0V00* service1 = new Service1();
    cout << "Task1.V1\n";
    int a, b;
    cout << "������� ������ �����=";
    cin >> a;
    if (a % 5 == 0)
        cout << "������� �� 5" << endl;
    else
        cout << "�� ������� �� 5" << endl;

    cout << "������� ������ �����=";
    cin >> b;
    cout << "�����= " << service1->Calculate(a, b);
    cout << "\n" << endl;

    ISprint1Task1* service2 = new Service2();
    cout << "Task1.V2\n";
    cout << "������� �����\ ����� ������ ������� ��� �� 13 ��� ���=";
    cin >> a;
    if (a % 13 == 0)
        cout << "������� �� 13" << endl;
    else
        cout << "�� ������� �� 13" << endl;
    cout << "�����= " << service2->Logic(a);
    cout << "\n" << endl;

    ISprint1Task1* service3 = new Service3();
    cout << "Task1.V3\n";
    cout << "������� ����� ����� ������ ����� ��� ������ ��� ��������=";
    cin >> a;
    if (a % 2 == 0)
        cout << "������" << endl;
    else
        cout << "��������" << endl;
    cout << "\n" << endl;

    ISprint1Task1* service4 = new Service4();
    cout << "Task1.V4\n";
    cout << "������� ����� ����� ������ ������������ ��� �� 7 ��� ���=";
    cin >> a;
    if (a % 10 == 7)
        cout << "����� ������������ �� 7" << endl;
    else
        cout << "����� �� ������������ �� 7" << endl;
    cout << "\n" << endl;

    ISprint0Task7* service5 = new Service5();
    cout << "Task1.V5\n";
    int n;
    do
    {
        std::cout << "������� ��� ������� �����= ";
        std::cin >> n;
    } while (n < 100 || n > 999);

    a = n / 100;
    b = (n / 10) % 10;
    int c = n % 10;

    int d = a + b + c;
    if (d >= 10 && d <= 99)
        std::cout << "a. ��" << std::endl;
    else
        std::cout << "a. ���" << std::endl;
};
