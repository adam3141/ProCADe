/**
 * @file siprefix.hpp
 * @author Adam Hamilton (adam3141.hamilton@gmail.com)
 * @brief Enumeration values
 * @date 10-05-2023
 *
 * @copyright Copyright (c) 2023
 *
 */
#pragma once

namespace corelib::measure
{
/**
 * @brief SI Prefixes
 *
 * Provides an enumeration constant for SI prefixes in the range of Atto (10^-18) to Peta(10^15). The few others with
 * multipliers such as centi, deci are not included here as they don't fit within the engineering notation.
 */
enum class SIPrefix
{
    None,
    Atto,
    Femto,
    Pico,
    Nano,
    Micro,
    Milli,
    Kilo,
    Mega,
    Giga,
    Tera,
    Peta
};
} // namespace corelib::measure