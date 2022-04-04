#include "EfficientTruckloads.h"

EfficientTruckloads::EfficientTruckloads() = default;

int EfficientTruckloads::numTrucks(int numCrates, int loadSize){

      if (this -> currentLoadSize != loadSize){
          hold.clear();
      }

      this -> currentLoadSize = loadSize;

      if (hold.find(numCrates) != hold.end()) {
          return hold[numCrates];
      }

      if (loadSize >= numCrates){
          return 1;
      }

      hold[numCrates] = numTrucks(numCrates / 2, loadSize) + numTrucks(numCrates - numCrates / 2, loadSize);

      return hold[numCrates];
  }

}
