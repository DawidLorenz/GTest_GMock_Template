#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <iostream>

#include "your_code_dynamic.h"

class TestDynamic : public ::testing::Test
{
protected:
    virtual void SetUp()
    {
       std::cout << "TestStatic::Setup\n";
    }

    virtual void TearDown()
    {
       std::cout << "TestStatic::TearDown\n";
    }
};

TEST_F(TestDynamic, add)
{
    int ret = add(100, 100);

    ASSERT_EQ(ret , 200);
}

TEST_F(TestDynamic, multiple)
{
    int ret = multiple(100);

    ASSERT_EQ(ret , 200);
}