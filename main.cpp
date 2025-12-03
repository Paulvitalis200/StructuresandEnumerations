#include <iostream>

using namespace std;

struct Movie {
    string title; // No need to initialize strings because they are set to "" by default
    int releaseYear = 0;
    bool isPopular; // No need to initialize booleans because they are set to false by default

};


Movie getMovie() {
    return {"Terminator", 1984};
}

void showMovie(Movie& movie) {
    cout << movie.title;
}

int main() {

    auto movie = getMovie();
    showMovie(movie);

    return 0;
}