#include "pch.h"
#include "CppUnitTest.h"
#include"../LAb_6.2/LAB.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLAB62
{
	TEST_CLASS(UnitTestLAB62)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[] = { 1,2,3,4,5,6 };
			int n = 6;

			double p = calculateAverage(a, n);
			Assert::AreEqual(p, 3.5);
		}
	};
}
