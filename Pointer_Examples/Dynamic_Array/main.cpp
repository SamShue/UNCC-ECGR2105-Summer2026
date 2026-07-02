#include <iostream>

using namespace std;

int* growArray(int* oldArray, int oldArraySize, int newArraySize){
    int* newArray = new int[newArraySize];

    for(int i = 0; i < oldArraySize; i++){
        newArray[i] = oldArray[i];
    }

    delete[] oldArray;

    return newArray;
}

void func(){
    int* a = new int[]{1, 2, 3};
    cout << a << endl;

    a = growArray(a, 3, 6);

    a[3] = 4;
    /*
    for(int i = 0; i < 4; i++){
        cout << a[i] << endl;
    }
    */

    delete[] a;
}

int main(){

    func();
    func();
    func();   

    return 0;
}