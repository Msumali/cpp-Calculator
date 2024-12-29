#ifndef BASIC_OPERATIONS_H
#define BASIC_OPERATIONS_H

#include <unordered_map>
// #include <string>
#include "Utilities.h"

extern std::unordered_map<std::string, double> variables;  // Declaration of 'variables'
namespace MathOperations{

class BasicOperations {
public:
    //Default constructor
     BasicOperations() = default;

// Function prototypes for math operations
     double add(double val1, double val2);
     double subtract(double val1, double val2);
     double multiply(double val1, double val2);
     double divide(double val1, double val2);
     double exponent(double val1, double val2);
};

}
#endif
