#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.VorobevSA.Sprint1.Task3/Tyuiu.VorobevSA.Sprint1.Task3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuVorobevSASprint1Task3test
{
	TEST_CLASS(TyuiuVorobevSASprint1Task3test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task7* service1 = new Service1();
			int x = 5004;
			char b;
			b = service1->Rezalt(x);
		}
	};
}
