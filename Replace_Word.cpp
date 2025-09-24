#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s, x;
        cin >> s >> x;

        int position = (int)s.find(x);
        while (position != -1) {
            s.replace(position, x.size(), "#");
            position = (int)s.find(x, position + 1);
        }

        cout << s << endl;
    };

    return 0;
}

