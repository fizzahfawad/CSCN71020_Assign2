#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int*, int*);
extern 
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(PerimeterFunctionality) // testing our perimeters functionality to see if result can 
			// equal to 9
		{
			int result = 0;
			int length = 3;
			int width = 3;
			result = getPerimeter(&length, &width);
			Assert::AreEqual(9, result);
		}
	};
}
