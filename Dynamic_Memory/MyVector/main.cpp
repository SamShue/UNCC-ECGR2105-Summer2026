#include <iostream>
#include "myvector.h"

using namespace std;

int main(){
    MyVector<int> v;
    v.push_back(5);
    v.push_back(7);
    v.push_back(9);

    // trigger reallocation of array
    v.push_back(13);
    v.push_back(17);

    v.pop_back();

    v.at(0) = 3;

    for(int i = 0; i < v.size(); i++){
        cout << v.at(i) << endl;
    }

    return 0;
}