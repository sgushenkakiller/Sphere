#include "CppUnitTest.h"
#include "../Library/point.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace PointTest
{
	TEST_CLASS(PointTest)
	{
	public:
		TEST_METHOD(toStringTest)
		{
			//arrande
			Point answer(1, 2, 3);
			std::string expected = "X: 1     Y: 2      Z: 3\n";
			//act
			auto actual = answer.toString();
			//assert
			Assert::AreEqual(actual, expected);
		}

		TEST_METHOD(getX)
		{
			Point answer(1, 2, 3);
            //act
			auto actual = answer.getX();
            int expected = 1;
			//assert
			Assert::AreEqual(actual, expected);
		}

		TEST_METHOD(getY)
		{
			Point answer(1, 2, 3);
            //act
			auto actual = answer.getY();
            int expected = 2;
			//assert
			Assert::AreEqual(actual, expected);
		}
		TEST_METHOD(getZ)
		{
			Point answer(1, 2, 3);
            //act
			auto actual = answer.getZ();
            int expected = 3;
			//assert
			Assert::AreEqual(actual, expected);
		}
	};
}
