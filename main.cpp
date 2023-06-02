#include <iostream>
#include "IntComplex.h"
#include "FloatComplex.h"

int main(int argc, char *argv[]) {
    if(argc < 5) {
        std::cout << "Not enough arguments. Please provide real and imaginary parts for IntComplex and FloatComplex.\n";
        return 1;
    }
    int iReal = std::stoi(argv[1]);
    int iImag = std::stoi(argv[2]);
    float fReal = std::stof(argv[3]);
    float fImag = std::stof(argv[4]);

    IntComplex ic1(iReal, iImag);
    FloatComplex fc1(fReal, fImag);

    // Demonstrate functionality
    // ...

    return 0;
}
//I have used several AI tools for comments and debugging,understanding how to code,
