#include <iostream>
#include <map>

using namespace std;

struct Node {
    char data;
    int weight;
    Node* left;
    Node* right;
};

void printMap(map<char, int> m) {
    for(auto itr=m.begin(); itr!=m.end(); ++itr) {
        cout<<"Character = "<<itr->first<<", Frequency = "<<itr->second<<endl;
    }
}
int main() {
    string plainText = "This is a test";

    map<char, int> frequencyMap;

    for(char c: plainText) {
        if(frequencyMap.find(c) == frequencyMap.end())
            frequencyMap[c] = 1;
        else
            frequencyMap[c]++;
    }

    printMap(frequencyMap);

    Node node;
    node.data = 'a';
}
