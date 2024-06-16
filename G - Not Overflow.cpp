#include <iostream>
using namespace std;
int main() {
    long long N;
    cin >> N;

    if (N >= -2147483648LL && N <= 2147483647LL) {
       cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
