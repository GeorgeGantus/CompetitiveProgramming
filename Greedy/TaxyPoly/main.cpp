#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
    int n;
    cin >> n;
    int array[n];
    vector<int> mapa(4, 0);
    int j;
    for (int i = 0; i < n; i++) {
        cin >> j;
        mapa[j - 1]++;
    }
    int cars = 0;
    int x = min(mapa[0], mapa[2]);
    cars += x;
    mapa[0] -= x;
    mapa[2] -= x;
    // cout << "trieto: " << cars << mapa[2] << mapa[0] << endl;
    cars += mapa[3];
    if (mapa[2] != 0) {
        cars += mapa[2];
    }
    if (mapa[1] % 2 == 0) {
        cars += mapa[1] / 2;
        mapa[1] = 0;
    } else {
        cars += mapa[1] / 2;
        mapa[1] = 1;
    }
    cars += mapa[0] / 4;
    mapa[0] = mapa[0] % 4;

    // cout << "cars: " << cars << mapa[1] << mapa[0] << endl;

    if (mapa[0] + 2 * mapa[1] > 4) {
        cars += 2;
    } else if (mapa[0] > 0 || mapa[1] > 0) {
        cars += 1;
    }

    cout << cars << endl;

    return 0;
}
