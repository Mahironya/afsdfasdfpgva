#include<iostream>
using namespace std;

int main() {
    int apple_quantity = 0;
    cin >> apple_quantity;

    if (apple_quantity >= 0) {
        cout << "Today, I ate " << apple_quantity << " apple" << (apple_quantity > 1 ? "s." : ".") << endl;
    }
}
