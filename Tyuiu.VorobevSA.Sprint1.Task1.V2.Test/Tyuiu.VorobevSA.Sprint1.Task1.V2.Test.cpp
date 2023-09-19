#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.VorobevSA.Sprint1.Task1/Tyuiu.VorobevSA.Sprint1.Task1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuVorobevSASprint1Task1V2Test
{
	TEST_CLASS(TyuiuVorobevSASprint1Task1V2Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint1Task1* service2 = new Service2();
			int a = 26;
			a = service2->Logic(a);
		}
	};
}
