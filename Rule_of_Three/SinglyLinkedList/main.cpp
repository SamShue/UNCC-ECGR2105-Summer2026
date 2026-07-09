#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int data){
        next = nullptr;
        this->data = data;
    }

    Node(int data, Node* next){
        this->data = data;
        this->next = next;
    }
};

class List {
    public:
    List(){
        head = nullptr;
    }

    ~List(){
        if(head == nullptr)
            return;

        while(head != nullptr){
            Node* nextNode = head->next;
            delete head;
            head = nextNode;
        }
    }

    List(const List& other){
        if(other.head == nullptr){
            head = nullptr;
            return;
        }

        head = new Node(other.head->data);

        Node* otherCurrentNode = other.head;
        Node* myCurrentNode = head;
        while(otherCurrentNode->next != nullptr){
            otherCurrentNode = otherCurrentNode->next;
            myCurrentNode->next = new Node(otherCurrentNode->data);
            myCurrentNode = myCurrentNode->next;
        }
    }

    void operator=(const List& other){
        if(this == &other){
            return;
        }

        if(head == nullptr)
            return;

        while(head != nullptr){
            Node* nextNode = head->next;
            delete head;
            head = nextNode;
        }

        if(other.head == nullptr){
            head = nullptr;
            return;
        }

        head = new Node(other.head->data);

        Node* otherCurrentNode = other.head;
        Node* myCurrentNode = head;
        while(otherCurrentNode->next != nullptr){
            otherCurrentNode = otherCurrentNode->next;
            myCurrentNode->next = new Node(otherCurrentNode->data);
            myCurrentNode = myCurrentNode->next;
        }
    }

    void push_back(int data){
        if(head == nullptr){
            head = new Node(data);
            return;
        }

        Node* currentNode = head;
        while(currentNode->next != nullptr){
            currentNode = currentNode->next;
        }

        currentNode->next = new Node(data);
    }

    void insert(int index, int data){
        if(index == 0){
            head = new Node(data, head);
            return;
        }

        Node* currentNode = head;
        int currentIndex = 0;
        while(currentIndex != (index - 1)){
            currentNode = currentNode->next;
            currentIndex++;
        }

        Node* oldNext = currentNode->next;
        currentNode->next = new Node(data, oldNext);
    }

    void pop_back(){
        if(head == nullptr){
            return;
        }

        if(head->next == nullptr){
            delete head;
            head = nullptr;
            return;
        }

        Node* currentNode = head;
        while(currentNode->next->next != nullptr){
            currentNode = currentNode->next;
        }
        delete currentNode->next;
        currentNode->next = nullptr;
    }

    int size() const {
        int numElements = 0;
        Node* currentNode = head;
        while(currentNode != nullptr){
            currentNode = currentNode->next;
            numElements++;
        }
        return numElements;
    }

    int& at(int index) const {
        Node* currentNode = head;
        int currentIndex = 0;
        while(currentIndex != index){
            currentNode = currentNode->next;
            currentIndex++;
        }
        return currentNode->data;
    }

    private:
    Node* head;
};

int main(){
    List list; // head -> nullptr
    list.push_back(5); // head -> 5 -> nullptr
    list.push_back(3); // head -> 5 -> 3 -> nullptr
    list.push_back(7); // head -> 5 -> 3 -> 7 -> nullptr

    list.insert(1, 9); // head -> 5 -> 9 -> 3 -> 7 -> nullptr

    list.pop_back();   // head -> 5 -> 9 -> 3 -> nullptr

    List list2 = list;

    list2.push_back(13);

    list = list2;

    for(int i = 0; i < list.size(); i++){
        cout << list.at(i) << endl;
    }

    return 0;
}