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
     * @brief Converts an SI prefix value to a std::string.
     *
     * This function returns the name of the prefix.
     *
     * @throws std::out_of_range if the prefix is not valid.
     */
    const static std::string &prefixToString(const SIPrefix prefix);

    /**
     * @brief Converts an SI prefix value to a std::string.
     *
     * This function returns the symbol of the prefix.
     *
     * @throws std::out_of_range if the prefix is not valid.
     */
    const static std::string &prefixToSymbol(const SIPrefix prefix);

    /**
     * @brief Converts a string to an SI prefix.
     *
     * This is provided as a way to convert strings such as "100m" or "100milli" to use the correct prefix.
     *
     * @param prefix_name This is the name or symbol that identifies the prefix.
     * @param all_lower If this is false (default), the prefix string is all lower case and should not be converted,
     * otherwise convert to lower case.
     *
     * @note If you are converting a symbol, do not set convert_lower to true otherwise you will generate an exception
     * or produce erroneous results.
     *
     * @throws std::out_of_range if the prefix name or symbol is not recognized.
     */
    static SIPrefix stringToPrefix(const std::string &prefix_name, bool convert_lower = false);
};
} // namespace corelib::measure