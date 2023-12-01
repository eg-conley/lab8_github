// Library.cpp
#include "Library.h"
#include <iostream>

using namespace std; //had to add

Library::Library() {
    for (int i = 0; i < 10; i++) {
        books[i] = "";
    }
}

bool Library::addBook(string bookName) {
    for (int i = 0; i < 10; i++) {
        if (books[i] == "") {
            books[i] = bookName;
            return true;
        }
    }
    return false;
}

bool Library::removeBook(string bookName) {
    for (int i = 0; i < 10; i++) {
        if (books[i] == bookName) {
            books[i] = "";
            return true;
        }
    }
    return false;
}

void Library::print() {
    for (int i = 0; i < 10; i++) {
        if (books[i] != "") {
            cout << books[i] << endl;
        }
    }
}