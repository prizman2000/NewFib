#include "gtest/gtest.h"
#include "lib.h"

TEST(findSumOfFib, expectedSum) {

EXPECT_EQ(fib(7), 13);

EXPECT_EQ(fib(5), 5);

EXPECT_EQ(fib(20), 6765);

}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
