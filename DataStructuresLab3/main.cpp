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

char prompt();
void calculation(ComplexNumber, ComplexNumber, string);
ComplexNumber getComplexNumbers(ComplexNumber);
double getScalar();
void additionOrSubtraction(ComplexNumber, ComplexNumber, char);
void multiplyOrDivide(ComplexNumber, char);



int main() {
    // insert code here...
    double choice, choice2;
    string wish;
    char decision;
    ComplexNumber cn, cn2;
    
    while(true) {
        cout << "Enter values for your complex number. First number given will be real and second value will be imaginary" << endl;
        //while valid numbers are being entered..
        if(cin >> choice >> choice2) {
            //present menu here with choice of options
            cn.setReal(choice);
            cn.setImaginary(choice2);
            
            do {
                decision = prompt();
            } while(decision == 'f');
            
            //pass in decision to calculation method
            if(decision == '-' || decision == '+' || decision == 'c') {
                additionOrSubtraction(cn, cn2, decision);
            } else if (decision == '*' || decision == '/') {
                multiplyOrDivide(cn, decision);
            }
            
            cout << "Do you wish to continue? y/n" << endl;
            if(cin >> wish) {
                if(wish != "n") continue;
                
                else break;
            } else {
                cout << "Input not recognized, terminating program";
                break;
            }
            
            
            //after choice, prompt if they want to do another one, if so choice again...else break
        } else {
            //input in bad state so clear it out
            cin.clear();
            
            //get rid of bad input
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        }
        
    }
    

    
    
    return 0;
}

char prompt() {
    char decision = 'f';
    
    cout << "Would you like to *, /, +, or - ? Alternatively, press c to compare two complex numbers" << endl;;
    if(cin >> decision) {
        return decision;
    } else {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        
        return decision;

    }
    
}

void additionOrSubtraction(ComplexNumber cn, ComplexNumber cn2, char decision) {
    switch(decision) {
        case '+': {
            cn2 = getComplexNumbers(cn2);
            cn + cn2;
            cn.print();
            break;
        }
        case '-': {
            cn2 = getComplexNumbers(cn2);
            cn - cn2;
            cn.print();
            break;
        }
        case 'c': {
            bool isEqual;
            cn2 = getComplexNumbers(cn2);
            isEqual = (cn == cn2);
            if(isEqual) {
                cout << "the two complex numbers are equal" << endl;
            } else {
                cout << "the two complex number are NOT equal" << endl;
            }
            break;
        }
        default: {
            cout << "Invalid operation..." << endl;
            break;
        }
    }
}

void multiplyOrDivide(ComplexNumber cn, char decision) {
    switch(decision) {
        case '*': {
            double scalar = getScalar();
            cn * scalar;
            cn.print();
            break;
        }
        case '/': {
            double scalar = getScalar();
            cn / scalar;
            cn.print();
            break;
        }
        default: {
            cout << "Invalid operation..." << endl;
            break;
        }
    }
}

ComplexNumber getComplexNumbers(ComplexNumber cn) {
    double num1, num2;
    
    while(true) {
        cout << "Enter values for complex number: " << endl;
        if(cin >> num1 >> num2) {
            cn.setReal(num1);
            cn.setImaginary(num2);
            break;
        } else {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "Invalid number. ";
        }
    }
    
    return cn;
}

double getScalar() {
    double scalar;
    
    while(true) {
        cout << "Enter value for scalar: " << endl;
        if(cin >> scalar) {
            break;
        } else {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "Invalid number. ";
        }
    }
    
    return scalar;
}
