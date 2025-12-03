#include <iostream>

using namespace  std;


enum Action {
    List = 1,
    Add,
    Update
};

// The compiler will assign the members different numbers i.e
// List will be 0, Add will be 1, Update will be 2

// We can also make them explicitly e.g
// enum Action {
//     List = 1,
//     Add = 2,
//     Update = 3
// };

int main() {

    cout <<
        "1: List invoices" << endl <<
        "2: Add invoice" << endl <<
        "3: Update invoice" << endl <<
        "Select: ";

    int input;
    cin >> input;

    if (input == Action::List) {
        cout << "List invoices";
    }
    return 0;
}