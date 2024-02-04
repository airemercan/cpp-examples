//
//  main.cpp
//  Project-Film-Tracker
//
//  Created by İrem Ercan on 4.02.2024.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Film {
    string name;
    string genre;
    int yearWatched;
};

vector<Film> filmList;

void addMovie() {
    Film newMovie;
    
    cout << "Name: ";
    getline(cin, newMovie.name);

    cout << "Genre (movie/serie): ";
    getline(cin, newMovie.genre);

    cout << "Year Watched: ";
    cin >> newMovie.yearWatched;
    cin.ignore();

    filmList.push_back(newMovie);

    cout << newMovie.name << " Added successfully! :') \n\n";
}

void listedYear() {
    sort(filmList.begin(), filmList.end(), [](const Film &a, const Film &b) {
        return a.yearWatched < b.yearWatched;
    });

    cout << "Based on Year Watched \n";
    for (const Film &film : filmList) {
        cout << film.name << " (" << film.genre << ") - " << film.yearWatched << "\n";
    }
    cout << endl;
}

void listedAlphabetically() {
    sort(filmList.begin(), filmList.end(), [](const Film &a, const Film &b) {
        return a.name < b.name;
    });

    cout << "Alphabetical Order of Films in List \n";
    for (const Film&film : filmList) {
        cout << film.name << " (" << film.genre << ") - " << film.yearWatched << "\n";
    }
    cout << endl;
}

void listedAll() {
    cout << "Total List \n";
    for (const Film&film : filmList) {
        cout << film.name << " (" << film.genre << ") - " << film.yearWatched << "\n";
    }
    cout << endl;
}

int main() {
    cout << "Movie Tracker Application \n";

    while (true) {
        cout << "1. Add movie \n";
        cout << "2. List based on year watched \n";
        cout << "3. List alphabetically \n";
        cout << "4. Whole list \n";
        cout << "5. Exit \n";
        cout << "Please enter a number: ";

        int choose;
        cin >> choose;
        cin.ignore();

        switch (choose) {
            case 1:
                addMovie();
                break;
            case 2:
                listedYear();
                break;
            case 3:
                listedAlphabetically();
                break;
            case 4:
                listedAll();
                break;
            case 5:
                cout << " Okay, see you later! \n";
                return 0;
            default:
                cout << "Enter another number please. \n";
                break;
        }
    }

    return 0;
}
