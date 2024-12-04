#ifndef UTILS_H
#define UTILS_H

#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

void setColor(int color);
void resetColor();

class Utils{
    public:
static bool check_StrIsNum(string s);
// bool check_StrIsNum(string& s);
static void remove_Spaces(string &s);
static bool stringBinary(string str);
// bool stringBinary(string& str);
static int binToDec(int binValue);
static bool validateHexInput(string hexValue);
// bool validateHexInput(string& hexValue);
// int hexToDec(string& hexValue);
static int hexToDec(string hexValue);
static bool check_Substring(string s2, string s1);

//static double getVarMath(std::string my_Var);


// Number and String Conversion Functions
    
static bool validateHex_Input(string hex_Value);

static string getFileNameWithoutExtension(const std::string filePath);

};

#endif
