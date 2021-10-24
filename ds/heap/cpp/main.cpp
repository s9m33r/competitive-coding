#include <iostream>
#include "../../../problems/misc/easy/binary-representation/cpp/main.h"

using namespace std;

struct Node {
    int data;

    Node* parent;
    Node* left;
    Node* right;
};

class Heap {
    private:
    Node* root;
    int size;

    public:
    bool insert(int data);
    int top();
    int remove();
};

bool Heap::insert(int data) {
    cout<<getBinaryRepresentation(12);
    Node newNode;
    newNode.data = data;

    if(root == nullptr) {
        root = &newNode;
    }

    return data;
}

int Heap::top() {
    return 0;
}

int Heap::remove() {
    return 0;
}

int main() {
    Heap heap;

    cout<<heap.insert(1)<<endl;
    cout<<heap.insert(2)<<endl;
    cout<<heap.insert(3)<<endl;

    return 0;
}
