#include "CppUnitTest.h"
#include "riddle.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

namespace RiddleTests
{
    TEST_CLASS(RiddleTests)
    {
    public:

        TEST_METHOD(TestCorrectAnswer)
        {
            Riddle firstRiddle("What gets smaller?", "Soap");
            Assert::IsTrue(firstRiddle.checkAnswer("Soap"));
        }

        TEST_METHOD(TestWrongAnswer)
        {
            Riddle firstRiddle("What gets smaller?", "soap");
            Assert::IsFalse(firstRiddle.checkAnswer("water"));
        }

        TEST_METHOD(TestGetQuestion)
        {
            Riddle firstRiddle("Test question", "answer");
            Assert::AreEqual(string("Test question"), firstRiddle.getQuestion());
        }

        TEST_METHOD(TestAttemptsDecrease)
        {
            Riddle firstRiddle("Test", "answer");
            firstRiddle.reduceAttempts();
            Assert::AreEqual(2, firstRiddle.getAttempts());
        }

        TEST_METHOD(TestInitialAttempts)
        {
            Riddle firstRiddle("Test", "answer");
            Assert::AreEqual(3, firstRiddle.getAttempts());
        }
    };
}