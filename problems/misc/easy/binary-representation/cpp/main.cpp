#include "main.h"

void printBinaryRepresentation(int);

//int main() {
//    printBinaryRepresentation(pow(2, 0));
//
//    return 0;
//}

void printBinaryRepresentation(int n) {
    string binary_string = getBinaryRepresentation(n);

    cout<<binary_string<<endl;
}

string getBinaryRepresentation(int n) {
    string binary_string;

    int bitCount = sizeof(n) * 8;

    for(int i = 1 << (bitCount - 2); i > 0; i /= 2) {
        binary_string += ((n & i) == 0 ? "0" : "1");
    }

    cout<<binary_string.length()<<endl;

    return binary_string;
}
