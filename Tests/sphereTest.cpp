#include "CppUnitTest.h"
#include "../Library/point.h"
#include "../Library/sphere.h"



using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace SphereTest
{
	TEST_CLASS(SphereTest)
	{
	public:
		TEST_METHOD(toStringTest)
		{
			//arrande
			Point pt(1, 2, 3);
            Sphere answer(pt, 3);
			std::string expected = "center: X: 1     Y: 2      Z: 3\nradius: 3\n";
			//act
			auto actual = answer.toString();
			//assert
			Assert::AreEqual(actual, expected);
		}

		TEST_METHOD(getCenter)
		{
			Point pt(1, 2, 3);
            Sphere answer(pt, 3);
            //act
			auto actual = answer.getCenter();
            Point expected = pt;
			//assert
			Assert::AreEqual(actual, expected);
		}

		TEST_METHOD(getRadius)
		{
			Point pt(1, 2, 3);
            Sphere answer(pt, 5);
            //act
			auto actual = answer.getRadius();
            int expected = 5;
			//assert
			Assert::AreEqual(actual, expected);
		}
		TEST_METHOD(getVolume)
		{
			Point pt(1, 2, 3);
            Sphere answer(pt, 3);
            //act
			auto actual = (int)(answer.getVolume() * 1000);
            int expected = 84823;
			//assert
			Assert::AreEqual(actual, expected);
		}
		TEST_METHOD(getSurfaceArea)
		{
			Point pt(1, 2, 3);
            Sphere answer(pt, 3);
            //act
			auto actual = (int)(answer.getSurfaceArea() * 1000);
            int expected = 113097;
			//assert
			Assert::AreEqual(actual, expected);
		}
	};
}
