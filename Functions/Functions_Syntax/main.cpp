#include <iostream>

using namespace std;

const double PI = 3.14;

double circleArea(double radius);
void swap(string& x, string& y);
void swap(double& x, double& y);
void swap(int& x, int& y);

int main(){
    double radius = 4.0;
    double area = circleArea(radius);

    cout << PI << endl;
    cout << "Area is: " << area << endl;

    char a = '1';
    char b = '2';
    swap(a, b);

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    return 0;
}

double circleArea(double radius){
    double result = radius*radius*PI;
    return result;
}

void swap(double& x, double& y){
    cout << "Double swap!" << endl;
    double temp = x;
    x = y;
    y = temp;
}

void swap(int& x, int& y){
    cout << "Int swap!" << endl;
    int temp = x;
    x = y;
    y = temp;
}

void swap(string& x, string& y){
    cout << "string swap!" << endl;
    string temp = x;
    x = y;
    y = temp;
}

/*
template <typename T>
void myswap(T& x, T& y){
    cout << "templated swap!" << endl;
    T temp = x;
    x = y;
    y = temp;
}
*/