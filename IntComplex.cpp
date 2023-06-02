#include "IntComplex.h"
#include <stdexcept>

// constructor to initialize the complex number with real and imaginary parts
IntComplex::IntComplex(int real, int imag) : realPart(real), imaginaryPart(imag) {}

// overloaded addition operator for IntComplex
IntComplex IntComplex::operator+(IntComplex const& obj) {
    return IntComplex(realPart + obj.realPart, imaginaryPart + obj.imaginaryPart);
}

// overloaded subtraction operator for IntComplex
IntComplex IntComplex::operator-(IntComplex const& obj) {
    return IntComplex(realPart - obj.realPart, imaginaryPart - obj.imaginaryPart);
}
// overloaded division operator for IntComplex, handles division by zero
// overloaded division operator for IntComplex, handles division by zero
IntComplex IntComplex::operator/(IntComplex const& obj) {
    int denom = obj.realPart * obj.realPart + obj.imaginaryPart * obj.imaginaryPart;
    if (denom == 0) {
        throw std::invalid_argument("Division by zero is undefined");
    }
    return IntComplex((realPart * obj.realPart + imaginaryPart * obj.imaginaryPart) / denom, (imaginaryPart * obj.realPart - realPart * obj.imaginaryPart) / denom);
}



// overloaded multiplication operator for IntComplex
IntComplex IntComplex::operator*(IntComplex const& obj) {
    return IntComplex(realPart * obj.realPart - imaginaryPart * obj.imaginaryPart, realPart * obj.imaginaryPart + imaginaryPart * obj.realPart);
}

// overloaded division operator for IntComplex, does not handle division by zero
// other functions...

// overloaded division operator for IntComplex, handles division by zero


// other functions...


