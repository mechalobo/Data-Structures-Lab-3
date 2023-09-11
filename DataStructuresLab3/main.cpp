//
//  main.cpp
//  DataStructuresLab3
//
//  Created by Eder Aguilar on 9/11/23.
//

#include <iostream>
#include <string>
#include "ComplexNumCalc.h"

using namespace std;

int main() {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    cout << "Creating ComplexNumCalc object..." << endl;
    
    ComplexNumCalc number;
    number.setNumOne(5);
    
    cout << "Value of number is " << number.getNumOne() << endl;
    return 0;
}
