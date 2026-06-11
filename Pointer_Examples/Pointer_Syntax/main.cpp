#include <iostream>

using namespace std;

int main(){
    float x = 5.5;
    int* p = (int*)&x;

    cout << *p << endl;

    /*
    int x = 5;
    int* p = &x;

    cout << "x: " << x << endl;
    cout << "p: " << p << endl;
    cout << "*p: " << *p << endl;
    cout << "&x: " << &x << endl;
    cout << "&p: " << &p << endl;

    *p = 10;

    cout << "x: " << x << endl;
    */
    return 0;
}