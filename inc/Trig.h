#ifndef TRIG_H
#define TRIG_H

#include <string>
#include <algorithm>
#include <cctype>

namespace TrigRatio{
class Trig{
public:
    //Constructor
    Trig() = default;

    //Sine functions
    double sinDegSolv(double f);
    double sinRadSolv(double f);
    double asinDegSolv(double f);
    double asinRadSolv(double f);

    //Cosine functions
    double cosFunc(double f);
    double cosRadSolv(double f);
    double acosDegSolv(double f);
    double acosRadSolv(double f);

    //Tangent functions
    double tanDegSolv(double f);
    double tanRadSolv(double f);
    double atanDegSolv(double f);
    double atanRadSolv(double f);
};
}


#endif