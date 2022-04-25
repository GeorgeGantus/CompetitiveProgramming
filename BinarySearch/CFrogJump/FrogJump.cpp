#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        string path;
        cin >> path;
        string sequentialL = "";
        int greaterL = 0;
        for (int j = 0; j < path.length(); j++) {
            if (path[j] == 'L') {
                sequentialL += path[j];
                if (sequentialL.length() > greaterL) {
                    greaterL = sequentialL.length();
                }
            } else {
                sequentialL = "";
            }
        }
        cout << greaterL + 1 << endl;
    }
    return 0;
}
