#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;

    int typeA[2] = {0, 0}; // quantity per box, price
    int typeB[2] = {0, 0};
    int typeC[2] = {0, 0};

    // Input for each type
    cin >> typeA[0] >> typeA[1];
    cin >> typeB[0] >> typeB[1];
    cin >> typeC[0] >> typeC[1];

    // Calculate the minimum cost for each type
    int prize[3] = {0, 0, 0};
    prize[0] = typeA[1] * ((n % typeA[0] == 0) ? (n / typeA[0]) : (n / typeA[0] + 1));
    prize[1] = typeB[1] * ((n % typeB[0] == 0) ? (n / typeB[0]) : (n / typeB[0] + 1));
    prize[2] = typeC[1] * ((n % typeC[0] == 0) ? (n / typeC[0]) : (n / typeC[0] + 1));

    // Find the minimum prize
    int min_prize = min(prize[0], min(prize[1], prize[2]));

    // Output the result
    cout << min_prize << endl;

    return 0;
}
