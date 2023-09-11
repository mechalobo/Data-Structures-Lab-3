//
//  ComplexNumCalc.cpp
//  DataStructuresLab3
//
//  Created by Eder Aguilar on 9/11/23.
//

#include <stdio.h>
#include "ComplexNumCalc.h"

using namespace std;

int ComplexNumCalc::getNumOne() const {
    return this->num1;
}

void ComplexNumCalc::setNumOne(int num1) {
    this->num1 = num1;
}

int ComplexNumCalc::getNumTwo() const {
    return this->num2;
}

void ComplexNumCalc::setNumTwo(int num2) {
    this->num2 = num2;
}
