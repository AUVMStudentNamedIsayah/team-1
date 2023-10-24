#include <iostream>
#include <sstream>
#include <iomanip>

// This function converts RGB code to Hexadecimal code
std::string rgb_to_hex(int r, int g, int b)
{
    // r, g, and b are all inputted integers that pick the larger number between 0 and the minimum number between 255 and r 
    r = std::max(0, std::min(255, r));
    g = std::max(0, std::min(255, g));
    b = std::max(0, std::min(255, b));

    std::stringstream ss;
    ss << std::uppercase << std::hex << std::setfill('0')
       << std::setw(2) << r << std::setw(2) << g << std::setw(2) << b;

    return ss.str();
}

//Test with std::string hexColor = rgb_to_hex(255, 127, 0); // returns "FF7F00"
