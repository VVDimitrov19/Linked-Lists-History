#include "pch.h"
#include "CppUnitTest.h"
#include "..\linked-list-project-2022\backEnd.cpp"
#include "..\linked-list-project-2022\frontEnd.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTesting
{
	TEST_CLASS(UnitTesting)
	{
	public:
		
		TEST_METHOD(grayNumToBinaryExpectToReturnSix)
		{
			int number = 5;
			int result = grayToBin(number);

			Assert::AreEqual(6, result);
		}

		TEST_METHOD(grayNumToBinaryExpectToReturnEight)
		{
			int number = 12;
			int result = grayToBin(number);

			Assert::AreEqual(8, result);
		}

		TEST_METHOD(grayNumToBinaryExpectToReturnFourteen)
		{
			int number = 9;
			int result = grayToBin(number);

			Assert::AreEqual(14, result);
		}
	};
}
