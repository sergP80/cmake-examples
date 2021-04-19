#include "gtest/gtest.h"

#include "array_utils.h"

TEST(BinarySearchSuite, ShouldSuccessSearchInSortedArray)
{
    int a[] = {-5, 3, 7, 11, 20};
    auto expect = 1;
    auto actual = array_utils::binary_search(a, 3);
    ASSERT_EQ(expect, actual);
}

TEST(BinarySearchSuite, ShouldFailSearchInSortedArray)
{
    int a[] = { -5, 3, 7, 11, 20 };
    auto expect = -1;
    auto actual = array_utils::binary_search(a, 22);
    ASSERT_EQ(expect, actual);
}
