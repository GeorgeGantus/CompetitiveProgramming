#include <bits/stdc++.h>
using namespace std;
#define lightDamage 10

int voidDamage(int x) {
    return x / 2 - 10;
}

int main(int argc, char const *argv[]) {
    /* code */
    int t;
    int x, n, m;
    int damage;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> x >> n >> m;
        while (x > 0 && (m > 0 || n > 0)) {
            bool hited = false;
            if ((x / 2 + 10 > x - 10 || m <= 0) && n > 0) {
                hited = true;
                n--;
                x = x / 2 + 10;
            } else if (m > 0) {
                m--;
                x = x - 10;
            }
        }
        if (x <= 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
