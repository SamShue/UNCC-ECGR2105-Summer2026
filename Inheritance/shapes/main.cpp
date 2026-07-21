#include <iostream>
#include <sstream>

using namespace std;

class Shape{
    public:
    Shape(double length, double width){
        this->length = length;
        this->width = width;
    }

    string toString(){
        stringstream ss;
        ss << "length: " << length << ", width: " << width;
        return ss.str();
    }

    protected:
    double length;
    double width;
};

class Rectangle : public Shape {
    public:
    Rectangle(double length, double width) : Shape(length, width) {}

    double Area(){
        return length * width;
    }
};

class Triangle : public Shape {
    public:
    Triangle(double height, double width) : Shape(height, width) {}

    double Area(){
        return 0.5 * length * width;
    }
};

int main(){
    Triangle triangle(5, 3);
    Rectangle rectangle(3, 6);

    cout << triangle.toString() << endl;
    cout << rectangle.toString() << endl;

    return 0;
}