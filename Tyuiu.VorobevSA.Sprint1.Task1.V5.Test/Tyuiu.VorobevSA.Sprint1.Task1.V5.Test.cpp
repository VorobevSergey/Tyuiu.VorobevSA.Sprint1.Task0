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
			ISprint0Task7* service5 = new Service5();
			int a = 345;
			a = service5->Rezalt(a);
		}
	};
}