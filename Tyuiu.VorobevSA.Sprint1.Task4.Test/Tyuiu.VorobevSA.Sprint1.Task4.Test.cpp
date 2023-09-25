#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.VorobevSA.Sprint1.Task4.lib/Tyuiu.VorobevSA.Sprint1.Task4.lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuVorobevSASprint1Task4Test
{
	TEST_CLASS(TyuiuVorobevSASprint1Task4Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint1Task4* service1 = new Service1();
			float x = 12;
			float y = service1->Vibor(x);

		}
	public:

		TEST_METHOD(TestMethod2)
		{
			ISprint1Task4* service1 = new Service1();
			float x = -4;
			float y = service1->Vibor(x);
		}
	public:

		TEST_METHOD(TestMethod3)
		{
			ISprint1Task4* service1 = new Service1();
			float x = 8;
			float y = service1->Vibor(x);
		}
	};
}
