// Tyuiu.VorobevSA.Sprint1.Task4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.VorobevSA.Sprint1.Task4.lib/Tyuiu.VorobevSA.Sprint1.Task4.lib.cpp"
#include <string>
#include "math.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUSSIAN");
    cout << "��������\a\t" << "������\t" << "�������������\n";
    ISprint1Task4* service1 = new Service1();
    cout << "Task4\n";
    float x;
    cout << "������� X: ";
    cin >> x;
    cout << endl;
    float y = service1->Vibor(x);
    cout << "����� y = " + to_string(y);
    cout << endl;
}