#include "pch.h"
#include "CppUnitTest.h"

extern "C" int(setLength);
extern "C" int(setWidth);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2) // testing input for length and width
	{
	public:
		
		TEST_METHOD(setLength1_1) 
		{
			int setLength(56);
			int result(56);
		}

		TEST_METHOD(setLength1_2)
		{
			int setLength(1);
			int result(1);

		}
		TEST_METHOD(TestMethod1_3)
		{
			int setLength(99);
			int result(99);
		
		}
		TEST_METHOD(TestMethod2_1)
		{
			int setWidth(45);
			int result(45);
		}

		TEST_METHOD(TestMethod2_2)
		{
			int setWidth(3);
			int result(3);
		}

		TEST_METHOD(TestMethod2_3)
		{
			int setwidth(-1);
			int result(0);
		}
	};
}
