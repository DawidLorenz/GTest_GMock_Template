#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <iostream>

#include "your_code_dynamic_parent.h"
#include "your_code_fff.hpp"

DEFINE_FFF_GLOBALS

class TestDynamicParent : public ::testing::Test
{
protected:
    virtual void SetUp()
    {
       std::cout << "TestStatic::Setup\n";
    }

    virtual void TearDown()
    {
       std::cout << "TestStatic::TearDown\n";
       RESET_FAKE(add);
       RESET_FAKE(multiply);
    }
};

// TEST_F(TestDynamicParent, Parent_add)
// {
//     RESET_FAKE(add);
//     RESET_FAKE(multiply);

//     int ret_moc = 10000;

//     add_fake.return_val = ret_moc;

//     int ret = Parent_add(100, 100);

//     ASSERT_EQ(ret , ret_moc);
// }

// TEST_F(TestDynamicParent, Parent_multiple)
// {
//     RESET_FAKE(add);
//     RESET_FAKE(multiply);

//     int ret_moc = 10000;

//     add_fake.return_val = ret_moc;

//     int ret = Parent_multiple(100);

//     ASSERT_EQ(ret , ret_moc);
// }