#ifndef EFFICIENTTRUCKLOADS_H
#define EFFICIENTTRUCKLOADS_H
#include <unordered_map>

class EfficientTruckloads {
public:
  EfficientTruckloads();
  int numTrucks(int numCrates, int loadSize);

private:
  unordered_map<int, int> hold;
  int currentLoadSize = -1;
};
