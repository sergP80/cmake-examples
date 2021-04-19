#include "gtest/gtest.h"

#include "array_utils.h"

TEST(SortTestSuite, ShouldIsSortedForOneElement)
{
    int a[] = {-5};
    ASSERT_TRUE(array_utils::is_sorted(a));
}

TEST(SortTestSuite, ShouldIsSortedForTwoElement)
{
    int a[] = { -5, 4};
    array_utils::is_sorted(a);
    ASSERT_TRUE(array_utils::is_sorted(a));
}

TEST(SortTestSuite, ShouldIsSortedForRandomElements)
{
    int a[] = { -5, 4, 8, 20};
    ASSERT_TRUE(array_utils::is_sorted(a));
}

TEST(SortTestSuite, ShouldIsNotSortedForRandomElements)
{
    int a[] = { -5, 4, 8, 7 };
    ASSERT_FALSE(array_utils::is_sorted(a));
}
