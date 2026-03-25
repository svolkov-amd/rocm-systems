#include "rocprofiler_compute_tool.h"

#include <gtest/gtest.h>

class TestRocprofilerComputeTool : public ::testing::Test
{
protected:

};

TEST_F(TestRocprofilerComputeTool, TestExample)
{
    EXPECT_EQ(1 + 1, 2);
} 

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
