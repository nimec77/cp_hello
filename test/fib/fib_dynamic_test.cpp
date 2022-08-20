//
// Created by Dmitry Seloustev on 08.07.2022.
//

#include <gtest/gtest.h>
#include <fib/fib_dynamic.h>

TEST(FibTest, FibDynamicTest) {
    auto fib = FibDynamic();
    const auto result = fib.FibCalculateDriver(22);

    ASSERT_EQ(result, 17711l);
}

TEST(FibTest, FibLoopTest) {
    auto fib = FibDynamic();
    const auto result = fib.FibLoop(22);

    ASSERT_EQ(result, 17711l);
}

TEST(FibTest, FibUlimateTest) {
    auto fib = FibDynamic();
    const auto result = fib.FubUltimate(50);

    ASSERT_EQ(result, 12586269025);
}