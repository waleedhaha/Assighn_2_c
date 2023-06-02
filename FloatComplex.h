#ifndef FLOATCOMPLEX_H
#define FLOATCOMPLEX_H

#include "IntComplex.h"
#include <stdexcept> 

// Definition of the FloatComplex class
class FloatComplex : public IntComplex {
private:
    float realFloat; // real part of the floating point complex number
    float imaginaryFloat; // imaginary part of the floating point complex number

public:
    // constructor to initialize the complex number with floating point real and imaginary parts
    FloatComplex(float real = 0.0, float imag = 0.0);

    // overloaded arithmetic operators for the FloatComplex class
    FloatComplex operator+(FloatComplex const& obj);
    FloatComplex operator-(FloatComplex const& obj);
    FloatComplex operator*(FloatComplex const& obj);
    FloatComplex operator/(FloatComplex const& obj); // does not handle division by zero

    // getter methods to access private data members
    float getRealFloat() const { return realFloat; }
    float getImaginaryFloat() const { return imaginaryFloat; }
};

#endif // FLOATCOMPLEX_H

