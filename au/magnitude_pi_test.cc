
#include "au/magnitude.hh"

#include <cmath>

#include "au/testing.hh"
#include "gmock/gmock.h"
#include "gtest/gtest.h"

namespace au {

using ::testing::Eq;

namespace {

constexpr auto PI = Magnitude<Pi>{};


TEST(Pi, HasCorrectValue) {
    EXPECT_THAT(Pi::value(), Eq(M_PIl));
}

TEST(GetValue, PiToThePower1HasCorrectValues) {
    EXPECT_THAT(get_value<float>(PI), SameTypeAndValue(static_cast<float>(M_PI)));
    EXPECT_THAT(get_value<double>(PI), SameTypeAndValue(M_PI));
    EXPECT_THAT(get_value<long double>(PI), SameTypeAndValue(M_PIl));
}

}
}
