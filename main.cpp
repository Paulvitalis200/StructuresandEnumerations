#include <iostream>

using namespace  std;


enum class Action {
    List = 1,
    Add,
    Update
};

enum class Operation {
    List = 1,
    Add,
    Update
};

// Always use stronger type enums to prevent name collisions

int main() {

    cout <<
        "1: List invoices" << endl <<
        "2: Add invoice" << endl <<
        "3: Update invoice" << endl <<
        "Select: ";

    int input;
    cin >> input;

    // We have to explicitly cast it to an integer when using strongly typed enums
    // otherwise we'll get an error
    if (input == static_cast<int>(Action::List)) {
        cout << "List invoices";
    }
    return 0;
}