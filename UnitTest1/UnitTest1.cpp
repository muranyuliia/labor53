#include "pch.h"
#include "CppUnitTest.h"
#include "../labor53/labor53.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace UnitTest53 {
    TEST_CLASS(UnitTest53) {
public:
    TEST_METHOD(TestFunctionH_GreaterThanOne) {
      
        double expected = (sin(1.5) + 1) / (1 + cos(1.5));            
        double actual = h(1.5);
        Assert::AreEqual(expected, actual, 0.0001);
    }
    TEST_METHOD(TestFunctionH_LessThanOne)
    {            // Для x, яке менше одиниці.
        // Зверніть увагу: результат для цього тесту може змінитися в залежності від реалізації вашої функції.            double g = 1.0;
        double expected = 6.9956;    
        double actual = h(g * g + 1) + h(g + h(1)) + 1;
        Assert::AreEqual(expected, actual, 0.0001);
    }
    };
}