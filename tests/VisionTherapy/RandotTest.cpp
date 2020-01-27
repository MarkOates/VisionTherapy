
#include <gtest/gtest.h>

#include <VisionTherapy/Randot.hpp>

TEST(VisionTherapy_RandotTest, can_be_created_without_blowing_up)
{
   VisionTherapy::Randot randot;
}

TEST(VisionTherapy_RandotTest, run__returns_the_expected_response)
{
   VisionTherapy::Randot randot;
   std::string expected_string = "Hello World!";
   EXPECT_EQ(expected_string, randot.run());
}
