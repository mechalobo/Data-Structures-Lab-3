//
//  main.cpp
//  DataStructuresLab3
//
//  Created by Eder Aguilar on 9/11/23.
//

#include <iostream>
#include <string>
#include "ComplexNumber.h"

using namespace std;

int main() {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    cout << "Creating ComplexNumber object..." << endl;
    ComplexNumber num1(12, -6);
    ComplexNumber num2(5, -6);
    
    cout<< "Adding complex numbers..." << endl;
    ComplexNumber num3 = num1 + num2;
    
    cout << "Result.." << endl;
    num3.print();
    
    
    return 0;
}
