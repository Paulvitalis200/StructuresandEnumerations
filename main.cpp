#include <iostream>

using namespace std;

struct Date {
    int year = 1900;
    int month = 1;
    short day = 1;
};
struct Movie {
    string title; // No need to initialize strings because they are set to "" by default
    Date releaseDate;
    bool isPopular; // No need to initialize booleans because they are set to false by default

};

int main() {

    Date date {1984, 12, 3};
    Movie movie = {"Terminator",
        {
            1938,
            2,
            2
        }};

    cout << movie.releaseDate.month;
    return 0;
}