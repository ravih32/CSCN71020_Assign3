#include "pch.h"
#include "CppUnitTest.h"
#include <string>

extern "C" {
#include "../Assignment3/rps.h"
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CSCN71020_Assign3_Tests
{
    TEST_CLASS(RpsDrawTests)
    {
    public:
        TEST_METHOD(SameMove_YieldsDraw)
        {
            const char* out1 = rps_winner("Rock", "Rock");
            const char* out2 = rps_winner("Paper", "Paper");
            const char* out3 = rps_winner("Scissors", "Scissors");

            Assert::AreEqual(std::string("Draw"), std::string(out1));
            Assert::AreEqual(std::string("Draw"), std::string(out2));
            Assert::AreEqual(std::string("Draw"), std::string(out3));
        }
    };
}
