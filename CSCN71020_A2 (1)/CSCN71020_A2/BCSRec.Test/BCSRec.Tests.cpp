#include "pch.h"
#include "CppUnitTest.h"


// Devki Nandan Sharma- CSCN71020 - W25 - Assignment 02- Unit Tests
extern "C" int getPerimeter(int* length, int* width);
extern "C" int getArea(int* length, int* width);
extern "C" void setLength(int input, int* length);
extern "C" void setWidth(int input, int* width);
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace BCSRecUnitTests
{
	TEST_CLASS(BCSRecUnitTest)
	{
	public:
		
		TEST_METHOD(PerimeterTest)
		{
			int lenght = 20;
			int width = 10;
			int ActualPerimeter = getPerimeter(&lenght, &width);
			int ExpectedPerimeter = 60;
			Assert::AreEqual(ExpectedPerimeter, ActualPerimeter);


		}
		TEST_METHOD(AreaTest)
		{
			int length = 15;
			int width = 20;
			int ActualArea = getArea(&length,&width);
			int ExpectedArea = 300;
			Assert :: AreEqual(ExpectedArea, ActualArea);

		}
		TEST_METHOD(setLengthTest01)
		{
			// test to check with lenght within the specified limits 
			int length = 0;
			setLength (15, &length);
			Assert::AreEqual(15, length);

		}
		TEST_METHOD(setLengthTest02)
		{
			// test to check with lenght as a negative value
			int length = 0;
			setLength(-10, &length);
			Assert::AreNotEqual(-10, length);


		}

		TEST_METHOD(setLengthTest03)
		{
			// test to check with lenght value above the set limit
			int length = 0;
			setLength(101, &length);
			Assert::AreNotEqual(101, length);

		}
		TEST_METHOD(setWidthTest01)
		{
			// test to check with width within the specified limits 
			int width = 0;
			setWidth(24, &width);
			Assert::AreEqual(24, width);

		}
		TEST_METHOD(setWidthTest02)
		{
			// test to check with width as a negative value
			int width = 0;
			setWidth(-215, &width);
			Assert::AreNotEqual(-215, width);

		}
		TEST_METHOD(setWidthTest03)
		{
			// test to check with width value above the set limit
			int width = 0;
			setWidth(110, &width);
			Assert::AreNotEqual(110, width);

		}
	};
}
