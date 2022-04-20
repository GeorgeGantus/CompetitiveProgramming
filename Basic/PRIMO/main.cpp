#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    int number;
    cin >> number;
    bool prime = true;
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            prime = false;
            break;
        }
    }
    if (prime) {
        cout << "sim";
    } else {
        cout << "nao";
    }

    return 0;
}
