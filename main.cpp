#include <iostream>

using namespace std;

struct Movie {
    string title; // No need to initialize strings because they are set to "" by default
    int releaseYear = 0;
    bool isPopular; // No need to initialize booleans because they are set to false by default

    // Methods
    // A method is a function that is part of an object
    bool equals(const Movie& movie) {
        return (
            title == movie.title &&
            releaseYear == movie.releaseYear &&
            isPopular == movie.isPopular
        );
    }
};

int main() {

    Movie movie1 = {"Terminator", 1984};

    Movie movie2 = {"Terminator", 1984};
    cout << movie1.releaseYear;

    if (movie1.equals(movie2))
        cout << "Equal";
    return 0;
}