#include <iostream>
using namespace std;

int main() {
    int S, T, X;
    cin >> S >> T >> X;

    // Determine if the light is on at 30 minutes past X o'clock
    if (S < T) {
        // Case 1: Light-on period does not span across midnight
        if (S <= X && X < T) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    } else {
        // Case 2: Light-on period spans across midnight
        if ((S <= X && X <= 23) || (0 <= X && X < T)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
