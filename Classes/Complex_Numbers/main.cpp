#include <iostream>
#include <cmath>

using namespace std;

struct Complex {
    Complex() : real(0.0), imag(0.0) {

    }

    Complex(double real, double imag){
        Complex::real = real;
        Complex::imag = imag;

        //this->real = real;
        //this->imag = imag;
    }

    Complex add(Complex rhs) const {
        Complex sum;
        sum.real = real + rhs.real;
        sum.imag = imag + rhs.imag;
        return sum;
    }

    Complex operator+(Complex rhs) const {
        Complex sum;
        sum.real = real + rhs.real;
        sum.imag = imag + rhs.imag;
        return sum;
    }

    Complex operator+(double rhs) const {
        Complex sum;
        sum.real = real + rhs;
        sum.imag = imag;
        return sum;
    }

    bool operator>(Complex rhs) const {
        return magnitude() > rhs.magnitude();
    }

    double magnitude() const {
        return sqrt(real*real + imag*imag);
    }

    void print() const {
        cout << real << " + " << imag << "i" << endl;
    }

    double real;
    double imag;
};

int main(){
    // 6 + 5i
    // 2 + 2i
    // 8 + 7i

    Complex c1(6.0, 5.0);
    Complex c2(2.0, 2.0);

    Complex c3 = c2.add(c1);

    Complex c4 = c2 + c1;

    c4 = c4 + 5.0;

    c3.print();
    c4.print();

    if(c1 > c2){
        cout << "c1 is greater than c2!" << endl;
    }

    return 0;
}