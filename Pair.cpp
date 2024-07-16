#include <iostream>
#include <vector>
#include <utility> // for std::pair

using namespace std;

int main() {
    vector<pair<char, int>> v; // declare the vector to store pairs

    for (int i = 0; i < 3; i++) {
        pair<char, int> p;
        cout << "Enter the first = ";
        cin >> p.first;
        cout << "Enter the second = ";
        cin >> p.second;
        v.push_back(p); // push the pair p into the vector v
    }

    // Optional: Display the contents of the vector to verify
    for (size_t i = 0; i < v.size(); i++) { // Use size_t for the loop index to avoid signedness warning
        cout << "First: " << v[i].first << ", Second: " << v[i].second << endl;
    }

    return 0;
}
