#ifndef EFFICIENTTRUCKLOADS_H
#define EFFICIENTTRUCKLOADS_H
#include <unordered_map>

using namespace std;

class EfficientTruckloads {

public:
    EfficientTruckloads();
    int numTrucks(int numCrates, int loadSize);

private:
    unordered_map<int,int> mem;
    int current_loadSize = -1;


};

#endif 
