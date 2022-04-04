#include "Reverse.h"
#include "Truckloads"
#include "EfficientTruckloads"
#include <iostream>
#include <string>
#include <memory>

using namespace std;

int main (int argc, char* argv[]){

    shared_ptr<Reverse> reverse = make_shared<Reverse>();
    shared_ptr<Truckloads> truckloads = make_shared<Truckloads>();
    shared_ptr<EfficientTruckloads> EfficientTruckloads = make_shared<EfficientTruckloads>();

    if (argc != 5){
        cout << "ERROR" << endl;
        exit(1);
    }

    if (isdigit(*argv[1])){
        int i = stoi(argv[1]);
        if(i < 0){
            cout << "ERROR";
        }else{
            cout << reverse ->reverseDigit(1) << " ";
        }
    }

    string a = argv[2];
    cout << reverse ->reverseString(a) << " ";

    if (isdigit(*argv[3]) && isdigit(*argv[4])) {
        int numCrates = stoi(argv[3]);
        int loadSize = stoi(argv[4]);
        if (numCrates < 0 || loadSize < 0) {
            cout << "ERROR ERROR" << endl;
        } else{
            cout << truckLoads -> numTrucks(numCrates, loadSize) << " " << EfficientTruckLoads -> numTrucks(numCrates, loadSize) << endl;
        }
    }else{
        cout << "ERROR ERROR" << endl;
    }


}
