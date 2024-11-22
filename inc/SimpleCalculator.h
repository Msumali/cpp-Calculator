#ifndef SIMPLECALCULATOR_H
#define SIMPLECALCULATOR_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <functional>
#include <cmath>
#include "Utils.h"
#include "BasicOperations.h"
#include "Constants.h"

class SimpleCalculator {
    // Define variables as a private member within the class
  private:
  std::map<std::string, double> variables;

    // Math Functions
    bool mathFunc(std::string math, double &result);
    void mathOp(std::string &math, string symbol, const function<double(double, double)> &f);
    void mathFunc(std::string &math, string symbol,const function<double(double)> &f);

    // Supporting Functions
    bool variableDef(std::string line);
    
    // static double getVarMath(string my_Var);
    double getVarMath(std::string my_Var);

    void string_Filter(char *str);
    // bool check_Substring(string s2, string s1);

public:
    SimpleCalculator();
    bool fileExecution(string fileName);
};

#endif // SIMPLECALCULATOR_H
