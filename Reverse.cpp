#include "Reverse.h"
#include<string>
#include <iostream>
#include "math.h"
using namespace std;

Reverse::Reverse(){

}

int Reverse::reverseDigit(int value){
    if (value < 0){
        return -1;
    }
    int num = log10(value);

    if (value == 0){
        return 0;
    }
    if (value < 10){
        return value;
    }

    return ((value%10 * pow(10, num)) + reverseDigit(value/10));

}

std::string Reverse::reverseString(string letters){
    if(letters.empty()) {
        return "";
    } 
    const int final = letters.length() - 1;
    return letters[final] + reverseString(letters.substr(0,final));

};
