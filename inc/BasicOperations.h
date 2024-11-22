#ifndef BASICOPERATIONS_H
#define BASICOPERATIONS_H

#include <unordered_map>
#include <string>
#include "Utils.h"

using namespace std;

extern std::unordered_map<std::string, double> variables;  // Declaration of 'variables'
namespace MathOperations{

class BasicOperations{
// Function prototypes for math operations
public:
    static double add(double val1, double val2);
    static double subtract(double val1, double val2);
    static double multiply(double val1, double val2);
    static double divide(double val1, double val2);
    static double exponent(double val1, double val2);
};

}



// Other function prototypes as necessary


#endif
