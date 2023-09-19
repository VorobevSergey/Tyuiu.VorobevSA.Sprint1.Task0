// Tyuiu.VorobevSA.Sprint1.Task0.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"
#include <string>

using namespace std;

// TODO: This is an example of a library function
class Service1 : public ISprint1Task0V00
{
	//Inherited via ISprint1Task0V00
	virtual int Calculate(int a, int b) override
	{
		return a + b;
	};
};

class Service2 : public ISprint1Task1
{
	//Inherited via ISprint1Task1
	virtual int Logic(int a) override
	{
		return a / 13;
	};
};

class Service3 : public ISprint1Task1
{
	//Inherited via ISprint1Task3
	virtual int Logic(int a) override
	{
		return a / 2;
	};
};

class Service4 : public ISprint1Task1
{
	//Inherited via ISprint1Task1
	virtual int Logic(int a) override
	{
		return a;
	};
};

class Service5 : public ISprint0Task7
{
	//Inherited via ISprint0Task7
	virtual float Rezalt(int a) override
	{
		return a;
	};
};