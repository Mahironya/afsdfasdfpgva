#include <iostream>
using namespace std;

int main() {
    int x, n, res = 0, day;
    cin >> x >> n;
    for (int i = 0; i < n; i++) {
        day = (x + i - 1) % 7 + 1;
        if (day != 6 && day != 7) {
            res += 250;
        }
    }

    cout << res << endl;
}


