#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\LEGION\source\repos\Lab_6.12\Lab_6.12\Source.cpp"   

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			const int n = 6;
			int b[n] = { 9, 8, 7, 6, 5, 4 };
			t = Number(b, n, 0, 0);
			Assert::AreEqual(5, t);
		}
	};
}
