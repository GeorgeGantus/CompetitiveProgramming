#include <math.h>

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int t;
    cin >> t;
    long int a;
    long int b;
    for (int i = 0; i < t; i++) {
        cin >> a >> b;
        if (a % b == 0) {
            cout << 0 << endl;
            continue;
        }
        int j = ceil(double(a) / double(b));
        cout << b * j - a << endl;
    }

    return 0;
}
