#ifndef UTILITIES_H
#define UTILITIES_H

#include <string>
#include <algorithm>
#include <cctype>


class Utilities{
public:
    //Constructor
    Utilities() = default;
    //String Validation and Checking
    bool check_StrIsNum(std::string s);
    bool check_Substring(std::string s2, std::string s1);
    bool stringBinary(std::string str);

    // String manipulation
    void remove_Spaces(std::string &s);
    std::string getFileNameWithoutExtension(const std::string filePath);

    //Number conversion
    int binToDec(int binValue);
    int hexToDec(std::string hexValue);
    bool validateHex_Input(std::string hex_Value);
    
    //Console formatting
    void setColor(int color); 
    void resetColor();
};

#endif //UTILITIES_H