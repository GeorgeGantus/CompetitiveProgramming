
#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    int n;
    cin >> n;
    int fat = 1;
    for (int i = 2; i < n + 1; i++) {
        fat = fat * i;
    }
    cout << fat;
    return 0;
}
