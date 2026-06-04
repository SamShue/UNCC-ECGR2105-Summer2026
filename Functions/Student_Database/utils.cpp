#include "utils.h"

double average(vector<double> v){
    double avg = 0.0;

    for(double val : v)
        avg += val;
    avg /= v.size();

    return avg;
}