//problem 02

#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    getline(cin, S);

    stringstream ss(S);
    string word;
    while (ss >> word) {
        if (word == "Jessica") {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}
