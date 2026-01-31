// SPDX-FileCopyrightText: 2000-2026 Xavier Leclercq
// SPDX-License-Identifier: BSL-1.0

#include "FixedPointNumberTests.hpp"
#include "Ishiko/Math/Numbers/FixedPointNumber.hpp"

using namespace Ishiko;

FixedPointNumberTests::FixedPointNumberTests(const TestNumber& number, const TestContext& context)
    : TestSequence(number, "FixedPointNumber tests", context)
{
    append<HeapAllocationErrorsTest>("Constructor test 1", ConstructorTest1);
}

void FixedPointNumberTests::ConstructorTest1(Test& test)
{
    FixedPointNumber<10, 2> fixed_point_number;

    ISHIKO_TEST_PASS();
}
