#include <iostream>
#include <numeric>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b) swap(a, b);
    if (a > c) swap(a, c);
    if (b > c) swap(b, c);
    int divisor = gcd(a, c);
    cout << a / divisor << '/' << c / divisor << endl;

    return 0;
}
