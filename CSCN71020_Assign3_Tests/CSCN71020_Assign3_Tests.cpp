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

        // ?? Add this new test (RED)
        TEST_METHOD(RockBeatsScissors_Player1Wins)
        {
            const char* out = rps_winner("Rock", "Scissors");
            Assert::AreEqual(std::string("Player1"), std::string(out));
        }
        TEST_METHOD(ScissorsBeatsPaper_Player1Wins)
        {
            const char* out = rps_winner("Scissors", "Paper");
            Assert::AreEqual(std::string("Player1"), std::string(out));
        }

        TEST_METHOD(PaperBeatsRock_Player1Wins)
        {
            const char* out = rps_winner("Paper", "Rock");
            Assert::AreEqual(std::string("Player1"), std::string(out));
        }

        TEST_METHOD(RockLosesToPaper_Player2Wins)
        {
            const char* out = rps_winner("Rock", "Paper");
            Assert::AreEqual(std::string("Player2"), std::string(out));
        }

    };
}

