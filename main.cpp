#include <iostream>
#include "IntComplex.h"
#include "FloatComplex.h"

int main(int argc, char* argv[]) {
    if (argc < 5) {
        std::cout << "Not enough arguments. Please provide real and imaginary parts for IntComplex and FloatComplex.\n";
        return 1;
    }
    int iReal = std::stoi(argv[1]);
    int iImag = std::stoi(argv[2]);
    float fReal = std::stof(argv[3]);
    float fImag = std::stof(argv[4]);

    IntComplex ic1(iReal, iImag);
    IntComplex ic2(2, 3);

    FloatComplex fc1(fReal, fImag);
    FloatComplex fc2(4.3, 5.11);

    std::cout << "First Integer Complex Number:\n";
    std::cout << ic1.getRealPart() << " + " << ic1.getImaginaryPart() << "t\n";

    std::cout << "Second Integer Complex Number:\n";
    std::cout << ic2.getRealPart() << " + " << ic2.getImaginaryPart() << "t\n";

    std::cout << "First Float Complex Number:\n";
    std::cout << fc1.getRealFloat() << " + " << fc1.getImaginaryFloat() << "t\n";

    std::cout << "Second Float Complex Number:\n";
    std::cout << fc2.getRealFloat() << " + " << fc2.getImaginaryFloat() << "t\n";

    std::cout << "Integer Complex Results:\n";
    IntComplex icSum = ic1 + ic2;
    IntComplex icSub = ic1 - ic2;
    IntComplex icMul = ic1 * ic2;
    IntComplex icDiv;
    try {
        icDiv = ic1 / ic2;
    } catch (const std::invalid_argument& e) {
        std::cout << "Division of complex numbers: " << e.what() << "\n";
    }

    std::cout << "Sum of complex numbers: " << icSum.getRealPart() << " + " << icSum.getImaginaryPart() << "t\n";
    std::cout << "Subtraction of complex numbers: " << icSub.getRealPart() << " + " << icSub.getImaginaryPart() << "t\n";
    std::cout << "Multiplication of complex numbers: " << icMul.getRealPart() << " + " << icMul.getImaginaryPart() << "t\n";
    std::cout << "Division of complex numbers: " << icDiv.getRealPart() << " + " << icDiv.getImaginaryPart() << "t\n";

    std::cout << "Float Complex Results:\n";
    FloatComplex fcSum = fc1 + fc2;
    FloatComplex fcSub = fc1 - fc2;
    FloatComplex fcMul = fc1 * fc2;
    FloatComplex fcDiv;
    try {
        fcDiv = fc1 / fc2;
    } catch (const std::invalid_argument& e) {
        std::cout << "Division of complex numbers: " << e.what() << "\n";
    }

    std::cout << "Sum of complex numbers: " << fcSum.getRealFloat() << " + " << fcSum.getImaginaryFloat() << "t\n";
    std::cout << "Subtraction of complex numbers: " << fcSub.getRealFloat() << " + " << fcSub.getImaginaryFloat() << "t\n";
    std::cout << "Multiplication of complex numbers: " << fcMul.getRealFloat() << " + " << fcMul.getImaginaryFloat() << "t\n";
    std::cout << "Division of complex numbers: " << fcDiv.getRealFloat() << " + " << fcDiv.getImaginaryFloat() << "t\n";

    return 0;
}
