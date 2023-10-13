#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int*, int*);
extern "C" int getArea(int*, int*);
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(PerimeterFunctionality) // testing our perimeters functionality to see if result can 
			// equal to 12
		{
			int result = 0;
			int length = 3;
			int width = 3;
			result = getPerimeter(&length, &width);
			Assert::AreEqual(12, result);
		}
		TEST_METHOD(AreaFunctionality) // testing our area functionality to see if area is equal to 15

		{
			int result = 0;
			int length = 5;
			int width = 3;
			result = getArea(&length, &width);
			Assert::AreEqual(15, result);

		}
	};
}
