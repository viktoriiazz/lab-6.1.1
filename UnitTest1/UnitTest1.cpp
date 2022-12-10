#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int A[] = {11, 34, 65, 1};
			int S = SumElement(A, 4);
			Assert::AreEqual(12, S);
		}
	};
}
