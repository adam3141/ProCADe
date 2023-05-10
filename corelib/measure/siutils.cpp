/**
 * @file siutils.cpp
 * @author Adam Hamilton (adam3141.hamilton@gmail.com)
 * @brief Utility class for SI units
 * @date 10-05-2023
 *
 * @copyright Copyright (c) 2023
 *
 */
#include "siutils.hpp"
#include <array>
#include <unordered_map>

namespace
{
using corelib::measure::SIPrefix;
/**
 * @brief Map Prefix -> tuple
 *
 * The map returns a Array where the first element is the full name and the second is the symbol.
 */
const std::unordered_map<SIPrefix, std::array<std::string, 2>> PREFIX_TO_STRING = {
    // clang-format off
    { SIPrefix::Atto,  {"atto",  "a"}},
    { SIPrefix::Femto, {"femto", "f"}},
    { SIPrefix::Pico,  {"pico",  "p"}},
    { SIPrefix::Nano,  {"nano",  "n"}},
    { SIPrefix::Micro, {"micro", "u"}},
    { SIPrefix::Milli, {"milli", "m"}},
    { SIPrefix::Kilo,  {"kilo",  "k"}},
    { SIPrefix::Mega,  {"mega",  "M"}},
    { SIPrefix::Giga,  {"giga",  "G"}},
    { SIPrefix::Tera,  {"tera",  "T"}},
    { SIPrefix::Peta,  {"peta",  "P"}},
    // clang-format on
};

/**
 * @brief Map Prefix -> tuple
 *
 * The map returns a Array where the first element is the full name and the second is the symbol.
 */
const std::unordered_map<std::string, SIPrefix> STRING_TO_PREFIX = {
    // clang-format off
    { SIPrefix::Atto},
    { SIPrefix::Femto},
    { SIPrefix::Pico},
    { SIPrefix::Nano},
    { SIPrefix::Micro},
    { SIPrefix::Milli},
    { SIPrefix::Kilo},
    { SIPrefix::Mega},
    { SIPrefix::Giga},
    { SIPrefix::Tera},
    { SIPrefix::Peta},
    // clang-format on
};


constexpr int PREFIX_NAME_INDEX = 0;
constexpr int PREFIX_SYMBOL_INDEX = 1;

} // namespace

namespace corelib::measure
{
const std::string &SIUtils::prefixToString(const SIPrefix prefix)
{
    // This form of the function will return the name of the prefix as defined by the map
    const auto &arr = PREFIX_TO_STRING.at(prefix);
    return arr[PREFIX_NAME_INDEX];
}

const std::string &SIUtils::prefixToSymbol(const SIPrefix prefix)
{
    // This form of the function will return the symbol of the prefix as defined by the map
    const auto &arr = PREFIX_TO_STRING.at(prefix);
    return arr[PREFIX_SYMBOL_INDEX];
}

SIPrefix SIUtils::stringToPrefix(const std::string &prefix, bool long_form=true)
{
    return STRING_TO
}

} // namespace corelib::measure