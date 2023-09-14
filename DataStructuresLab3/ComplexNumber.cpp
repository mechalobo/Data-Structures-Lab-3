//
//  ComplexNumber.cpp
//  DataStructuresLab3
//
//  Created by Eder Aguilar on 9/12/23.
//

#include "ComplexNumber.h"
#include <iostream>

using namespace std;

void ComplexNumber::setReal(double real) {
    this->real = real;
}

double ComplexNumber::getReal() const {
    return this->real;
}

void ComplexNumber::setImaginary(double imaginary) {
    this->imaginary = imaginary;
}

double ComplexNumber::getImaginary() const {
    return this-> imaginary;
}

ComplexNumber::ComplexNumber(){
    this->real = 0;
    this->imaginary = 0;
}

ComplexNumber::ComplexNumber(double real, double imaginary) {
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

void ComplexNumber::operator+(const ComplexNumber& right) {
    
    this->real += right.real;
    this->imaginary += right.imaginary;
}

void ComplexNumber::operator-(const ComplexNumber& right) {
    this->real -= right.getReal();
    this->imaginary -= right.getImaginary();
}

void ComplexNumber::operator*(double scalar) {
    this->real *= scalar;
    this->imaginary *= scalar;
    
}

void ComplexNumber::operator/(double scalar) {
    if(scalar != 0.0) {
        this->real /= scalar;
        this->imaginary /= scalar;
    }
}

bool ComplexNumber::operator==(const ComplexNumber& cn) {
    return ((this->real == cn.real) && (this->imaginary == cn.imaginary));
}

