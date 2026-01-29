#include <iostream>
#include <vector>

using namespace std;

struct Movie {
    string title; // No need to initialize strings because they are set to "" by default
    int releaseYear = 0;
    bool isPopular; // No need to initialize booleans because they are set to false by default
};

struct Person {
    string name;
    int age = 0;
    double weight = 0;
};

int main() {

    vector<Movie> movies;
    // Movie movie {"Terminator", 1984};
    movies.push_back({"Terminator", 1984});
    movies.push_back({"Terminator 2", 1995});

    // cout << movies[0].title << endl;

    for (const auto& movie: movies)
        cout << movie.title << endl;


    return 0;
}