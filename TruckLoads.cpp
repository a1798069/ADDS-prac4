#include "TruckLoads.h"

TruckLoads::TruckLoads(){
}

int TruckLoads;;numTrucks(int numCrates, int loadSize){
  if (loadSize >= numCrates){
    return 1;
  }
  return numTrucks(numCrates/2, loadSize) + numTrucks(numCrates - numCrates/2, loadSize);
}
