#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace riddletest
{
	TEST_CLASS(riddletest)
	{
	public:
		
        TEST_METHOD(TestCorrectAnswer)
        {
            Riddle firstRiddle("What gets smaller?", "soap");
            Assert::IsTrue(firstRiddle.checkAnswer("soap"));
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