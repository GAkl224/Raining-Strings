#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

void Welcome() {
    cout << "Welcome to the Business Sorting Program!" << endl;
}

void Bye() {
    cout << "Thank you for using the Business Sorting Program!" << endl;
}

void allPlaces(const vector<string>& businesses) {
    cout << "Your businesses are:" << endl;
    for (const auto& business : businesses) {
        cout << "    " << business << endl;
    }
}

int main() {
    Welcome();

    vector<string> businesses;
    string input;

    do {
        cout << "\nPlease enter the name of a business: ";
        cin >> input;

        businesses.push_back(input);
        sort(businesses.begin(), businesses.end());

       allPlaces(businesses);

        cout << "\nAnother business? ";
        cin >> input;
    } while (input == "y" || input == "Y" || input == "yes" || input == "Yes");

    Bye();

    return 0;
}
