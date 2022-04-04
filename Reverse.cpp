#include "Reverse.h"

Reverse::Reverse() = default;

int Reverse::reverseDigit(int value) {

    if (value < 0){
        return -1;
    }

    int a=1;

    while(value >= a*10){
        a* = 10;
    }

    if (a == 1){
        return value;
    }

    return reverseDigit(value % a) * 10 + value / a;

}

string Reverse::reverseString(string letters) {
    if (letters.empty()){
        return letters;
    }

    const int last = letters.length() - 1;

    return letters[last] + reverseString(letters.substr(0,last));
}
