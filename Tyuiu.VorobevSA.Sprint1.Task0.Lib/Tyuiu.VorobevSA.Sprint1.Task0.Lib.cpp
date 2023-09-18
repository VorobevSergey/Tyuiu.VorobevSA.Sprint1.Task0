// Tyuiu.VorobevSA.Sprint1.Task0.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

using namespace std;

// TODO: This is an example of a library function
class Service1 : public ISprint1Task0V01
{
	//Inherited via ISprint1Task0V01
	virtual int Rezalt(int a, int b, int c) override
	{
		return a * b * c;
	};
};

class Service2 : public ISprint1Task0V01
{
	//Inherited via ISprint1Task0V01
	virtual int Rezalt(int a, int b, int c) override
	{
		return 2 * c * (a + b);
	};
};

class Service3 : public ISprint1Task0V00
{
	//Inherited via ISprint1Task0V00
	virtual int Calculate(int a, int b) override
	{
		return a * a + b * b;
	};
};

class Service4 : public ISprint1Task0V00
{
	//Inherited via ISprint1Task0V00
	virtual int Calculate(int a, int b) override
	{
		return a * b;
	};
};

class Service5 : public ISprint1Task0V01
{
	//Inherited via ISprint1Task0V00
	virtual int Rezalt(int a, int b, int c) override
	{
		return (a+b+c)/2;
	};
};