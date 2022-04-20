#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    int t;
    int a, b, x, y;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> a >> b >> x >> y;
        int area = 0;
        int hor[2];
        int vert[2];
        int right = a - (x + 1);
        int left = x;
        int top = b - (y + 1);
        int bottom = y;
        hor[0] = right;
        hor[1] = left;
        vert[0] = top;
        vert[1] = bottom;

        for (int j = 0; j < 2; j++) {
            if (area <= hor[j] * b) {
                area = hor[j] * b;
            }
        }
        for (int j = 0; j < 2; j++) {
            if (area <= vert[j] * a) {
                area = vert[j] * a;
            }
        }
        cout << area << endl;
    }
}
