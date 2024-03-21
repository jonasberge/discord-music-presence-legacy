#pragma  once

// cpp libs
#include <codecvt>
#include <regex>
#include <sstream>
#include <string>
#include <vector>


/**
 * @brier Converts an std::wstring to utr-8 std::string
 * @param wstr The wstring to be converted
 * @return The copnverted string
 */
inline std::string rawWstringToString(const std::wstring &wstr) {
    return std::wstring_convert<std::codecvt_utf8<wchar_t>>().to_bytes(wstr);
}


/// @brief Enum describing the state of TIDAL app
enum status { error, closed, opened, playing };


/**
 * @brief Checks tidal Info
 * @param song Track name if tidal is playing else empty string
 * @param artist Artist name if tidal is playing else empty string
 * @return returns a <status> struct with current tidal ifno
 */
status tidalInfo(std::wstring &song, std::wstring &artist) {
    song = L"Ruin Me";
    artist = L"Elevator Boys";
    return playing;
}

/**
 * Gets locale of current user
 * @return ISO 2 letter formated country code
 */
inline char *getLocale() noexcept {
    // TODO
    return "DE";
}
