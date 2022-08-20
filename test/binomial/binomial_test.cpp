//
// Created by Dmitry Seloustev on 08.07.2022.
//

#include <gtest/gtest.h>
#include <binomial/binomial.h>

TEST(BinomialTest, BinomialCoefficientTest) {
    auto binomial = Binomial();
    const auto result = binomial.BinomialCoefficient(5, 2);

    ASSERT_EQ(result, 10);
}
