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
		
		TEST_METHOD(performsXorOperationExpectToReturn1)
		{
			char num1 = '1';
			char num2 = '0';

			char result = xorFunc(num1, num2);

			Assert::AreEqual('1', result);
		}

		TEST_METHOD(performsXorOperationExpectToReturn0)
		{
			char num1 = '1';
			char num2 = '1';

			char result = xorFunc(num1, num2);

			Assert::AreEqual('0', result);
		}

		TEST_METHOD(convertsFromDecToGray)
		{
			int num = 6;
			string result = grayToBin(num);
			string expect = "101";

			Assert::AreEqual(expect, result);
		}

		TEST_METHOD(convertsFromDecToGrayTwo)
		{
			int num = 4;
			string result = grayToBin(num);
			string expect = "110";

			Assert::AreEqual(expect, result);
		}
	};
}
