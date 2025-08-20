#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string nm;
    int cls;
    char s;
    int id;
};

int main() {
    int N;
    cin >> N;
    vector<Student> students(N);

    for (int i = 0; i < N; i++) {
        cin >> students[i].nm >> students[i].cls >> students[i].s >> students[i].id;
    }

    int left = 0, right = N - 1;
    while (left < right) {
        swap(students[left].s, students[right].s);
        left++;
        right--;
    }

    for (int i = 0; i < N; i++) {
        cout << students[i].nm << " " << students[i].cls << " " << students[i].s << " " << students[i].id << endl;
    }

    return 0;
}
