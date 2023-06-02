#ifndef INTCOMPLEX_H
#define INTCOMPLEX_H

// Definition of the IntComplex class
class IntComplex {
private:
    int realPart; // real part of the complex number
    int imaginaryPart; // imaginary part of the complex number

public:
    // constructor to initialize the complex number
    IntComplex(int real = 0, int imag = 0);

    // overloaded arithmetic operators for the IntComplex class
    IntComplex operator+(IntComplex const& obj);
    IntComplex operator-(IntComplex const& obj);
    IntComplex operator*(IntComplex const& obj);
    IntComplex operator/(IntComplex const& obj);

    // getter methods to access private data members
    int getRealPart() const { return realPart; }
    int getImaginaryPart() const { return imaginaryPart; }
};

#endif // INTCOMPLEX_H

