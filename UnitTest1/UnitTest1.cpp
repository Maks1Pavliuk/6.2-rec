#include "pch.h"
#include "CppUnitTest.h"
#include "../6.2 рек/Source.cpp" 

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestCalculateAverageEvenIndex_Recursive)
        {
            // Підготовка даних для тесту
            const int SIZE = 10;
            int arr[SIZE] = { 17, 22, 19, 35, 44, 51, 85, 77, 65, 48 };

            // Виклик тестованої функції
            double result = calculateAverageEvenIndexRecursive(arr, SIZE);

            // Очікуваний результат: середнє арифметичне елементів з парними індексами
            double expected = (17 + 19 + 44 + 85 + 65) / 5.0;

            // Перевірка результату
            Assert::AreEqual(expected, result);
        }
    };
}
