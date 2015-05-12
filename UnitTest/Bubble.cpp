#include "stdafx.h"
#include "CppUnitTest.h"

#include "..\Practica Quadtree\p2DynArray.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(Bubble)
	{
	public:
		
		TEST_METHOD(BubbleSort)
		{
			
			p2DynArray <int> array;

			for (int i = 0; i < 1000; i++)
			{
				array.PushBack(rand());
			}

			int c = array.BubbleSort();

			Assert::AreEqual(array[0], c);


		}

		

	};
}