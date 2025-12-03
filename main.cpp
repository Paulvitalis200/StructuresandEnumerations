#include <iostream>

using namespace std;

struct Movie {
    string title; // No need to initialize strings because they are set to "" by default
    int releaseYear = 0;
    bool isPopular; // No need to initialize booleans because they are set to false by default

};

struct Point {
    double x;
    double y;
};

bool operator==( const Movie& first, const Movie& second) {
    return (
        first.title == second.title &&
        first.releaseYear == second.releaseYear &&
        first.isPopular == second.isPopular
    );
}

bool operator==(const Point& address1, const Point& address2) {
    return (
        address1.x == address2.x &&
        address1.y == address2.y
    );
}

// Stream insertion operator
// ostream is short for output stream
ostream& operator<<(ostream& stream, const Movie& movie) {
    stream << movie.title;
    return stream; // We return the stream so that we can chain the stream insertion operators
}

ostream& operator<<(ostream& stream, const Point& point) {
    return stream << '(' << point.x << ", " << point.y << ')';
}

int main() {

    Movie movie1 = {"Terminator", 1984};

    Movie movie2 = {"Terminator", 1984};
    // cout << movie1.releaseYear << endl;


    Point pointOne = {17.12, 29.32};
    Point pointTwo {38.32, 21.32};

    if (movie1 == movie2)
        cout << "Equal" << endl;
    cout << movie1 << endl; // Will give the Title since we returned the movie.title to the output stream

    if (pointOne == pointTwo) {
        cout << "Points are equal" <<endl;
    } else {
        cout << "Points aren't equal" <<endl;
    }

    cout << "Point One: " << pointOne << endl;
    cout << "Point Two: " << pointTwo << endl;
    return 0;
}