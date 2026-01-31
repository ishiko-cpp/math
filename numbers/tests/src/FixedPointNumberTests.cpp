// SPDX-FileCopyrightText: 2000-2026 Xavier Leclercq
// SPDX-License-Identifier: BSL-1.0

#include "FixedPointNumberTests.hpp"

using namespace Ishiko;

FixedPointNumberTests::FixedPointNumberTests(const TestNumber& number, const TestContext& context)
    : TestSequence(number, "FixedPointNumber tests", context)
{
    append<HeapAllocationErrorsTest>("Constructor test 1", ConstructorTest1);
}

void FixedPointNumberTests::ConstructorTest1(Test& test)
{
}
