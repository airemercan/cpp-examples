#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Book {
    string title;
    string author;
    int year;
};

void displayBooks(const vector<Book>& library) {
    cout << "Books:" << endl;
    for (const Book& book : library) {
        cout << "Title: " << book.title << ", Author: " << book.author << ", Year: " << book.year << endl;
    }
    cout << endl;
} void addBook(vector<Book>& library) {
    Book newBook;
    cout << "Add a new book:" << endl;
    cout << "Title: ";
    getline(cin.ignore(), newBook.title);
    cout << "Author: ";
    getline(cin, newBook.author);
    cout << "Year: ";
    cin >> newBook.year;

    library.push_back(newBook);
    cout << "Successfully added." << endl << endl;
} int main() {
    vector<Book> library;

    while (true) {
        cout << "1. Library" << endl;
        cout << "2. Add a new book" << endl;
        cout << "3. Exit" << endl;

        int choice;
        cout << "Please select: ";
        cin >> choice;

        switch (choice) {
            case 1:
                displayBooks(library);
                break;
            case 2:
                cin.ignore();
                addBook(library);
                break;
            case 3:
                cout << "Exit" << endl;
                return 0;
            default:
                cout << "Unvalid action." << endl;
                break;
        }
    }
    return 0;
}
