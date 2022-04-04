#include "EfficientTruckloads.h"

EfficientTruckloads::EfficientTruckloads(){

};

int EfficientTruckloads::numTrucks(int numCrates, int loadSize) {

    if (this -> current_loadSize != loadSize){
        mem.clear();
    }

    this -> current_loadSize = loadSize;

    if (mem.find(numCrates) != mem.end()) {
        return mem[numCrates];
    }

    if (loadSize >= numCrates){
        return 1;
    }

    mem[numCrates] = numTrucks(numCrates / 2, loadSize) + numTrucks(numCrates - numCrates / 2, loadSize);

    return mem[numCrates];
}
