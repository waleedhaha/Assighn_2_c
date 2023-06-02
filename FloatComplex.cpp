#include "FloatComplex.h"
#include <stdexcept>

// constructor to initialize the complex number with floating point real and imaginary parts
FloatComplex::FloatComplex(float real, float imag) : realFloat(real), imaginaryFloat(imag) {}

// overloaded addition operator for FloatComplex
FloatComplex FloatComplex::operator+(FloatComplex const& obj) {
    return FloatComplex(realFloat + obj.realFloat, imaginaryFloat + obj.imaginaryFloat);
}

// overloaded subtraction operator for FloatComplex
FloatComplex FloatComplex::operator-(FloatComplex const& obj) {
    return FloatComplex(realFloat - obj.realFloat, imaginaryFloat - obj.imaginaryFloat);
}// overloaded division operator for FloatComplex, handles division by zero
FloatComplex FloatComplex::operator/(FloatComplex const& obj) {
    float denom = obj.realFloat * obj.realFloat + obj.imaginaryFloat * obj.imaginaryFloat;
    if (denom == 0.0f) {
        throw std::invalid_argument("Division by zero is undefined");
    }
    return FloatComplex((realFloat * obj.realFloat + imaginaryFloat * obj.imaginaryFloat) / denom, (imaginaryFloat * obj.realFloat - realFloat * obj.imaginaryFloat) / denom);
}


// overloaded multiplication operator for FloatComplex
FloatComplex FloatComplex::operator*(FloatComplex const& obj) {
    return FloatComplex(realFloat * obj.realFloat - imaginaryFloat * obj.imaginaryFloat, realFloat * obj.imaginaryFloat + imaginaryFloat * obj.realFloat);
}



