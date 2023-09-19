#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.VorobevSA.Sprint1.Task1/Tyuiu.VorobevSA.Sprint1.Task1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuVorobevSASprint1Task1V1Test
{
	TEST_CLASS(TyuiuVorobevSASprint1Task1V1Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint1Task0V00* service1 = new Service1();
			int a = 5;
			int b = 6;
			char d;
			a = service1->Calculate(a, b);
		}
	};
}
