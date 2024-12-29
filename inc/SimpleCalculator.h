#ifndef SIMPLE_CALCULATOR_H
#define SIMPLE_CALCULATOR_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <functional>
#include <cmath>
#include "Utilities.h"
#include "BasicOperations.h"
#include "Constants.h"


class SimpleCalculator {
public:
    SimpleCalculator();
    bool fileExecution(std::string fileName);

    
private:
    //Member variable
    std::map<std::string, double> variables;

    // Math Functions
    bool mathFunc(std::string math, double &result);
    void mathOp(std::string &math, std::string symbol, const std::function<double(double, double)> &f);
    void mathFunc(std::string &math, std::string symbol, const std::function<double(double)> &f);

    // Supporting Functions for variable handling
    bool variableDef(std::string& line);
    double getVarMath(std::string my_Var);


};

#endif // SIMPLE_CALCULATOR_H
