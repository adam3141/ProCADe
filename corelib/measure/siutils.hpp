/**
 * @file siutils.hpp
 * @author Adam Hamilton (adam3141.hamilton@gmail.com)
 * @brief Utility class for SI units
 * @date 10-05-2023
 *
 * @copyright Copyright (c) 2023
 *
 */
#pragma once

#include "corelib/measure/siprefix.hpp"
#include <string>

namespace corelib::measure
{
/**
 * @brief Utility class for SI units
 *
 * The design of this class is used to provide scope to various functions that work with SI units. The functions
 * contained within this class will be only static functions, which is why there will be a private constructor defined
 * to prohibit its instantiation.
 */
class SIUtils
{
  private:
    SIUtils() = default;

  public:
    /**
     * @brief Converts an SI prefix value to a std::string
     */
    const static std::string& prefixToString(const SIPrefix prefix);

    const static std::string& prefixToSymbol(const SIPrefix prefix);

    /**
     * @brief Converts a string to an SI prefix
     *
     * This is provided as a way to convert strings such as "100m" or "100milli" to use the correct prefix.
     */
    static SIPrefix stringToPrefix(const std::string &prefix);
};
} // namespace corelib::measure