#include <iostream>

using namespace std;

struct ElmList {
    int info;
    ElmList* next;
    };

int main() {
    ElmList node;
    node.info = 10;
    node.next = nullptr;
    ElmList* P; 
    P = &node;
    cout << "Info : " << node.info << endl;
    cout << "Next : " << node.next << endl;
    cout << P->info << endl;
    return 0;
    }
