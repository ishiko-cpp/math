// SPDX-FileCopyrightText: 2000-2026 Xavier Leclercq
// SPDX-License-Identifier: BSL-1.0

#ifndef GUARD_ISHIKO_CPP_MATH_NUMBERS_FIXEDPOINTNUMBER_HPP
#define GUARD_ISHIKO_CPP_MATH_NUMBERS_FIXEDPOINTNUMBER_HPP

namespace Ishiko
{
	template<size_t precision, size_t scale>
	class FixedPointNumber
	{
		static_assert(scale <= precision, "Scale cannot exceed precision");

    public:
        FixedPointNumber();

    private:
        // Helper to select appropriate integer type based on precision
        using storage_type =
            std::conditional_t<
                (precision <= std::numeric_limits<int32_t>::digits10),
                int32_t,
                std::conditional_t<(precision <= std::numeric_limits<int64_t>::digits10), int64_t, void>
            >;
        static_assert(!std::is_void<storage_type>::value, "Precision exceeds maximum supported value (18 digits)");

        storage_type m_value;
	};
}

template<size_t precision, size_t scale>
Ishiko::FixedPointNumber<precision, scale>::FixedPointNumber()
    : m_value(0)
{
}

#endif
