//
//  ComplexNumber.cpp
//  DataStructuresLab3
//
//  Created by Eder Aguilar on 9/12/23.
//

#include "ComplexNumber.h"
#include <iostream>

using namespace std;

void ComplexNumber::setReal(int real) {
    this->real = real;
}

int ComplexNumber::getReal() const {
    return this->real;
}

void ComplexNumber::setImaginary(int imaginary) {
    this->imaginary = imaginary;
}

int ComplexNumber::getImaginary() const {
    return this-> imaginary;
}

ComplexNumber::ComplexNumber(){
    this->real = 0;
    this->imaginary = 0;
}

ComplexNumber::ComplexNumber(int real, int imaginary) {
    this->real = real;
    this->imaginary = imaginary;
}

void ComplexNumber::print() const {
    if(this->imaginary < 0) {
        cout << real << imaginary << "i" << endl;
    } else {
        cout << real << "+" << imaginary << "i" << endl;
    }
}

ComplexNumber ComplexNumber::operator+(const ComplexNumber& right) {
    ComplexNumber temp;
    int tempReal;
    int tempImag;
    
    tempReal = this->real + right.real;
    tempImag = this->imaginary + right.imaginary;
    
    temp.setReal(tempReal);
    temp.setImaginary(tempImag);
    
    return temp;
}

