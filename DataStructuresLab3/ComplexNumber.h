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
    double real;
    double imaginary;
    
public:
    void setReal(double);
    double getReal() const;
    void setImaginary(double);
    double getImaginary() const;
    ComplexNumber();
    ComplexNumber(double, double);
    void print() const;
    void operator+(const ComplexNumber&);
    void operator-(const ComplexNumber&);
    void operator*(double);
    void operator/(double);
    bool operator==(const ComplexNumber&);
    
};

#endif /* ComplexNumber_hpp */
