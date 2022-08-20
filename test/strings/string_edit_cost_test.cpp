//
// Created by Dmitry Seloustev on 09.07.2022.
//

#include <gtest/gtest.h>
#include <strings/string_edit_cost.h>

TEST(StringsTest, StringCompareTest) {
    auto _string_edit_cost = StringEditCost();
    const std::string s = "hour";
    const std::string  c = "our";
    const auto _result = _string_edit_cost.stringCompare(s,
                                                         c, s.length(), c.length());
    ASSERT_EQ(_result, 1);
}
TEST(StringsTest, StringCompareDpTest) {
    auto _string_edit_cost = StringEditCost();
    const auto _result = _string_edit_cost.stringCompareDp(
            "thou shalt not",
            "you should not"
            );
    ASSERT_EQ(_result, 4);
}