//
//  ComplexNumber.hpp
//  DataStructuresLab3
//
//  Created by Eder Aguilar on 9/12/23.
//

#ifndef ComplexNumber_h
#define ComplexNumber_h

#include <string>
#include <iostream>

class ComplexNumber {
private:
    int real;
    int imaginary;
    
public:
    void setReal(int);
    int getReal() const;
    void setImaginary(int);
    int getImaginary() const;
    ComplexNumber();
    ComplexNumber(int, int);
    void print() const;
    ComplexNumber operator+(const ComplexNumber&);
    ComplexNumber operator-(const ComplexNumber&);
    
    
};

#endif /* ComplexNumber_hpp */
