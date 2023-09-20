#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.VorobevSA.Sprint1.Task2.V5/Tyuiu.VorobevSA.Sprint1.Task2.V5.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuVorobevSASprint1Task2V5test
{
	TEST_CLASS(TyuiuVorobevSASprint1Task2V5test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task7* service2 = new Service2();
			ISprint1Task1* service1 = new Service1();
			int x = 831;
			char b;
			b = service1->Logic(x);
		}
	};
}
