#include <iostream>

using namespace std;

struct Movie {
    string title; // No need to initialize strings because they are set to "" by default
    int releaseYear = 0;
    bool isPopular; // No need to initialize booleans because they are set to false by default
};

int main() {

    Movie movie = {"Terminator", 1984};

    cout << movie.releaseYear;
    return 0;
}