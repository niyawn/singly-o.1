#include <iostream>

using namespace std;

struct ElmList {
    int info;
    ElmList* next;
};

struct List { 
    ElmList* first;
};

void createList(List &L) { 
    L.first = nullptr;
}

void insertFirst(List &L, ElmList* P) {
    P->next = L.first;
    L.first = P;
}

void deleteFirst(List &L) {
    if (L.first == nullptr) { 
        cout << "List is empty" << endl; 
        return;
    }  
    ElmList* P = L.first;
    L.first = L.first->next;
    delete P;
}

void insertLast(List &L, ElmList* P) {
    if (L.first == nullptr) { 
        L.first = P; 
    } else {
        ElmList* Q = L.first;
        while (Q->next != nullptr) {
            Q = Q->next;
        }
        Q->next = P;
    }
}

void insertAfter(ElmList* Prec, ElmList* P) { 
    P->next = Prec->next; 
    Prec->next = P;
}


ElmList* createNewElement(int x) {
    ElmList* P = new ElmList;
    P->info = x;
    P->next = nullptr;
    return P;
}

ElmList* searchElement(List L, int key) {
    ElmList* P = L.first; 
    while (P != nullptr) {
        if (P->info == key) { 
            return P;
        } 
        P = P->next;
    } 
    return nullptr;
}

void printlist(List L) {
    ElmList* P = L.first;
    while (P != nullptr) {
        cout << P->info << " -> ";
        P = P->next;
    }
    cout << "nullptr";
    cout << endl;
}

int main() { 
    List L; createList(L);
    // insertFirst(L, createNewElement(10)); 
    // insertFirst(L, createNewElement(20)); 
    // insertFirst(L, createNewElement(30));
    // printlist(L);

    

    insertLast(L, createNewElement(10)); 
    insertLast(L, createNewElement(20)); 
    insertLast(L, createNewElement(30));
    printlist(L);

    insertFirst(L, createNewElement(5));
    printlist(L);

    if(searchElement(L, 10)){
        cout << "number found " << endl;
    } else {
        cout << "number not found" << endl;
    }
    ElmList* prec = searchElement(L, 10);    
    while(prec != nullptr && prec->info != 10){
        prec = prec -> next;
    }
    
    // if(L.first != nullptr){
    //     insertAfter(L.first, createNewElement(15));
    // }
    
    // cout << searchElement(L, 5) << endl; 
    deleteFirst(L);
    printlist(L);
    return 0;
}