// main.cpp
#include "Library.h"
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    Library library;
    string command, bookName;

    ifstream inputFile("test_input.txt");

    while (inputFile >> command) {
        if (command == "a") {
            inputFile >> bookName;
            if (!library.addBook(bookName)) {
                cout << "Cannot add book. Library is full or book already exists." << endl;
            }
        } else if (command == "r") {
            inputFile >> bookName;
            if (!library.removeBook(bookName)) {
                cout << "Cannot remove book. Book does not exist." << endl;
            }
        } else if (command == "p") {
            library.print();
        } else if (command == "q") {
            break;
        }
    }

    inputFile.close();

    return 0;
}