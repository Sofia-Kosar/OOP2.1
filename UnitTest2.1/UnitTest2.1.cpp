#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP2.1/Line.h"
#include "../OOP2.1/Line.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest21
{
	TEST_CLASS(UnitTest21)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Line line(2, 3); // y = 2x + 3
			double x = 4;
			double expected_y = 2 * x + 3;
			double actual_y = line.function(x);
			Assert::AreEqual(expected_y, actual_y);
		}
	};
}
