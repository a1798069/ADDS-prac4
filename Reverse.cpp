#include "Reverse.h"

Reverse::Reverse(){
}

int Reverse::reverseDigit(value){
  int revNum = 0;
  if (value > 0){
    revNum *= 10;
    revNum += value % 10;
    reverseDigit(value/10);
  } else {
    return -1;
  }
}

std::string Reverse::reverseString(letters){

 int n = letters.length();
 if (length > 0){
   return letters[n-1] + reverseString(letters.substr(0, n-1));
} else {
  return "ERROR";
}

Reverse::~Reverse(){
}
