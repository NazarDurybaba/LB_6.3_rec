#include "pch.h"
#include "CppUnitTest.h"
#include "../LB_6.3_rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			
			int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
			int size = sizeof(arr) / sizeof(arr[0]);

			
			int result = sumEven(arr, size);

			
			int expected = 2 + 4 + 6 + 8 + 10;

			
			Assert::AreEqual(expected, result);
		}
	};
}
