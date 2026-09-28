#include <iostream>

using namespace std;


struct ElmList {
    int info;
    ElmList* next;
    };

ElmList* createNewElement(int value) { 
    ElmList* P = new ElmList; 
    P->info = value; 
    P->next = nullptr; 
    return P; 
}

int main() { 
    ElmList* P = createNewElement(25); 
    cout << P->info << endl; 
    delete P; 
    return 0; 
}