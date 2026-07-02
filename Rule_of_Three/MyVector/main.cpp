#include <iostream>
#include "myvector.h"

using namespace std;

void problemMaker(){
    MyVector<int> v;
    v.push_back(5);
    v.push_back(7);
    v.push_back(9);

    MyVector<int> v2 = v; // Creates shallow copy - resolved with copy constructor

    v2.at(0) = 3;

    v = v2; // Creates shallow copy AND memory leak - resolved with a copy assignment override

    for(int i = 0; i < v.size(); i++){
        cout << v.at(i) << endl;
    }
}

int main(){
    problemMaker();
    problemMaker();
    problemMaker();

    return 0;
}