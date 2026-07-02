#ifndef MYVECTOR_H
#define MYVECTOR_H

template <typename T>
class MyVector{
    public:
    MyVector(){
        allocatedSize = 3;
        filledSize = 0;
        a = new T[allocatedSize];
    }

    ~MyVector(){
        delete[] a;
    }

    MyVector(const MyVector& other){
        allocatedSize = other.allocatedSize;
        filledSize = other.filledSize;
        a = new T[allocatedSize];
        for(int i = 0; i < filledSize; i++){
            a[i] = other.a[i];
        }
    }

    void operator=(const MyVector& other){
        if(this == &other)
            return;

        delete[] a;

        allocatedSize = other.allocatedSize;
        filledSize = other.filledSize;
        a = new T[allocatedSize];
        for(int i = 0; i < filledSize; i++){
            a[i] = other.a[i];
        }
    }

    void push_back(T data){
        if(filledSize == allocatedSize){
            //cout << "Allocating more space in array..." << endl;
            allocatedSize += 3;
            T* temp = new T[allocatedSize];
            for(int i = 0; i < filledSize; i++){
                temp[i] = a[i];
            }
            delete[] a;
            a = temp;
        }

        a[filledSize] = data;
        filledSize++;
    }

    void pop_back(){
        if(filledSize > 0)
            filledSize--;
    }

    unsigned int size() const {
        return filledSize;
    }

    T& at(unsigned int index) const {
        return a[index];
    }

    private:
    T* a;
    unsigned int allocatedSize;
    unsigned int filledSize;
};

#endif