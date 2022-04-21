#include <iostream>
#include <utility>
#include <vector>
using namespace std;
int main(int argc, char const *argv[]) {
    int size;
    vector<pair<int, int>> out;
    cin >> size;
    long int array[size];
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
    int n = 0;
    for (int i = 0; i < size; i++) {
        int min = array[i];
        int k = i;
        for (int j = i + 1; j < size; j++) {
            if (array[j] < min) {
                min = array[j];
                k = j;
            }
        }
        if (i != k) {
            n++;
            long int aux = array[i];
            array[i] = array[k];
            array[k] = aux;
            pair<int, int> x;
            x.first = i;
            x.second = k;
            out.push_back(x);
        }
    }
    cout << out.size() << endl;
    for (int i = 0; i < out.size(); i++) {
        cout << out[i].first << " " << out[i].second << endl;
    }

    return 0;
}
