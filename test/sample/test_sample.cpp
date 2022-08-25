#include <gtest/gtest.h>

#include <sample/sample.h>

TEST(Sample, MustReturnTrue)
{
    ASSERT_TRUE(sample());
}