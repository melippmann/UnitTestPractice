#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, smoke_test)
{
    ASSERT_TRUE(true);
}
TEST(PracticeTest, zzz_remeats)
{
    Practice testObject;
	ASSERT_EQ(testObject.count_starting_repeats("zzz"), 2 );
}

TEST(PracticeTest, xXx_repeats)
{
    Practice testObject;
	ASSERT_EQ(testObject.count_starting_repeats("xxx"), 2 );
}TEST(PracticeTest, escape_chars)
{
    Practice testObject;
	ASSERT_EQ(testObject.count_starting_repeats("\0\0\0"), 0 );
}
TEST(PracticeTest, new_lines)
{
    Practice testObject;
	ASSERT_EQ(testObject.count_starting_repeats("\n\n\n"), 2 );
}

TEST(PracticeTest, wordeqletter)
{
    Practice testObject;
	ASSERT_EQ(testObject.count_starting_repeats("III"), 2 );
}
TEST(PracticeTest, oneletter)
{
    Practice testObject;
	ASSERT_EQ(testObject.count_starting_repeats("I"), 0 );
}

TEST(PracticeTest, NoRepeats)
{
    Practice testObject;
	ASSERT_EQ(testObject.count_starting_repeats("abcd"), 0 );
}

TEST(PracticeTest, NoString)
{
    Practice testObject;
	ASSERT_EQ(testObject.count_starting_repeats(""), 0 );
}

TEST(PracticeTest, sorted_123)
{
    Practice testObject;
	int a = 1;
	int b = 2;
	int c = 3;

	testObject.sortDescending(a, b, c);
	ASSERT_EQ(a, 3);
	ASSERT_EQ(b, 2);
	ASSERT_EQ(c, 1);

}
TEST(PracticeTest, sorted_321)
{
    Practice testObject;
	int a = 3;
	int b = 2;
	int c = 1;

	testObject.sortDescending(a, b, c);
	ASSERT_EQ(a, 3);
	ASSERT_EQ(b, 2);
	ASSERT_EQ(c, 1);

}

TEST(PracticeTest, sorted_555)
{
    Practice testObject;
	int a = 5;
	int b = 5;
	int c = 5;

	testObject.sortDescending(a, b, c);
	ASSERT_EQ(a, 5);
	ASSERT_EQ(b, 5);
	ASSERT_EQ(c, 5);
	
}

TEST(PracticeTest, sorted_neg_0_pos)
{
    Practice testObject;
	int a = -1;
	int b = 0;
	int c = 1;

	testObject.sortDescending(a, b, c);
	ASSERT_EQ(a, 1);
	ASSERT_EQ(b, 0);
	ASSERT_EQ(c, -1);
	
}
TEST(PracticeTest, secondBigest)
{
    Practice testObject;
	int a = 1;
	int b = 3;
	int c = 2;

	testObject.sortDescending(a, b, c);
	ASSERT_EQ(a, 3);
	ASSERT_EQ(b, 2);
	ASSERT_EQ(c, 1);

}
TEST(PracticeTest, firstMidle)
{
    Practice testObject;
	int a = 2;
	int b = 3;
	int c = 1;

	testObject.sortDescending(a, b, c);
	ASSERT_EQ(a, 3);
	ASSERT_EQ(b, 2);
	ASSERT_EQ(c, 1);

}
TEST(PracticeTest, secondSmallest)
{
    Practice testObject;
	int a = 3;
	int b = 1;
	int c = 2;

	testObject.sortDescending(a, b, c);
	ASSERT_EQ(a, 3);
	ASSERT_EQ(b, 2);
	ASSERT_EQ(c, 1);

}
TEST(PracticeTest, first_number_diff)
{
    Practice testObject;
	int a = 2;
	int b = 3;
	int c = 3;

	testObject.sortDescending(a, b, c);
	ASSERT_EQ(a, 3);
	ASSERT_EQ(b, 2);
	ASSERT_EQ(c, 2);

}

TEST(PracticeTest, second_number_diff)
{
    Practice testObject;
	int a = 3;
	int b = 2;
	int c = 3;

	testObject.sortDescending(a, b, c);
	ASSERT_EQ(a, 3);
	ASSERT_EQ(b, 2);
	ASSERT_EQ(c, 2);

}
TEST(PracticeTest, third_number_diff)
{
    Practice testObject;
	int a = 3;
	int b = 3;
	int c = 2;

	testObject.sortDescending(a, b, c);
	ASSERT_EQ(a, 3);
	ASSERT_EQ(b, 2);
	ASSERT_EQ(c, 2);

}
TEST(PracticeTest, xXx_ispal)
{
    Practice testObject;
	ASSERT_EQ(testObject.isPalindrome("xXx"), true);
}

TEST(PracticeTest, y_ispal)
{
    Practice testObject;
	ASSERT_EQ(testObject.isPalindrome("y"), true);
}

TEST(PracticeTest, escape_ispal)
{
    Practice testObject;
	ASSERT_EQ(testObject.isPalindrome("\0n\0"), true);
}

TEST(PracticeTest, nums_ispal)
{
    Practice testObject;
	ASSERT_EQ(testObject.isPalindrome("1221"), true);
}

TEST(PracticeTest, nums_is_not_pal)
{
    Practice testObject;
	ASSERT_EQ(testObject.isPalindrome("31221"), false);
}

TEST(PracticeTest, xX_ispal)
{
    Practice testObject;
	ASSERT_EQ(testObject.isPalindrome("xX"), true);
}

TEST(PracticeTest, Xx_ispal)
{
    Practice testObject;
	ASSERT_EQ(testObject.isPalindrome("Xx"), true);
}

TEST(PracticeTest, emptystring)
{
    Practice testObject;
	ASSERT_EQ(testObject.isPalindrome(""), true);
}
TEST(PracticeTest, noSleepFirstNight)
{
	int slept[] = {0,1,2,3,4,5,6};
    Practice testObject;
	ASSERT_EQ(testObject.allnighter(slept), &slept[0]);
}
TEST(PracticeTest, noSleepSecondNight)
{
	int slept[] = {1,0,2,3,4,5,6};
    Practice testObject;
	ASSERT_EQ(testObject.allnighter(slept), &slept[1]);
}
TEST(PracticeTest, noSleepthirdNight)
{
	int slept[] = {1,2,0,3,4,5,6};
    Practice testObject;
	ASSERT_EQ(testObject.allnighter(slept), &slept[2]);
}

TEST(PracticeTest, noSleepfourthNight)
{
	int slept[] = {1,3,2,0,4,5,6};
    Practice testObject;
	ASSERT_EQ(testObject.allnighter(slept), &slept[3]);
}
TEST(PracticeTest, noSleepseventNight)
{
	int slept[] = {1,3,2,6,4,5,0};
    Practice testObject;
	ASSERT_EQ(testObject.allnighter(slept), &slept[6]);
}

TEST(PracticeTest, sleepAllnights)
{
	int slept[] = {1,2,3,4,5,6,7};
    Practice testObject;
	int * a = testObject.allnighter(slept);
	int * b = NULL;
	ASSERT_EQ(a, b);
}

TEST(PracticeTest, NoSleepAllNights)
{
	int slept[] = {0,0,0,0,0,0,0};
    Practice testObject;
	ASSERT_EQ(testObject.allnighter(slept), slept);
}
