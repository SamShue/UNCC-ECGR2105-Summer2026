#include <iostream>

using namespace std;

void myFunc(int* b, int size){
    b[0] = 13;

    cout << "sizeof(b): " << sizeof(b) << endl;
}

int main(){
    int a[] = {5, 7, 9};

    cout << "sizeof(a): " << sizeof(a) << endl;

    int size = sizeof(a) / sizeof(int);

    myFunc(a, size);

    cout << a[0] << endl;

    return 0;
}