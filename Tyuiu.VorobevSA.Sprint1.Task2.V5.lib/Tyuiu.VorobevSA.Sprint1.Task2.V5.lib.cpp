// Tyuiu.VorobevSA.Sprint1.Task0.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"
#include <string>

using namespace std;

// TODO: This is an example of a library function
class Service1 : public ISprint1Task1
{
	//Inherited via ISprint1Task1
	virtual int Logic(int a) override
	{
		int b,c,d;
		b = a / 100;
		c = (a / 10) % 10;
		d = a % 10;
		return b * c * d;
	};
};
class Service2 : public ISprint0Task7
{
	//Inherited via ISprint0Task7
	virtual float Rezalt(int a) override
	{
		int c = a; 
		string s = to_string(c);
		int b = s.length();
		if (b == 3)
		{
			return true;
		}
		else
		{
			return false;
		}

	};
};