#include <iostream>

using namespace std;

struct Movie {
    string title; // No need to initialize strings because they are set to "" by default
    int releaseYear = 0;
    bool isPopular; // No need to initialize booleans because they are set to false by default

};

bool operator==( const Movie& first, const Movie& second) {
    return (
        first.title == second.title &&
        first.releaseYear == second.releaseYear &&
        first.isPopular == second.isPopular
    );
}

// Stream insertion operator
// ostream is short for output stream
ostream& operator<<(ostream& stream, const Movie& movie) {
    stream << movie.title;
    return stream; // We return the stream so that we can chain the stream insertion operators
}


int main() {

    Movie movie1 = {"Terminator", 1984};

    Movie movie2 = {"Terminator", 1984};
    cout << movie1.releaseYear << endl;

    if (movie1 == movie2)
        cout << "Equal" << endl;
    cout << movie1; // Will give the Title since we returned the movie.title to the output stream
    return 0;
}