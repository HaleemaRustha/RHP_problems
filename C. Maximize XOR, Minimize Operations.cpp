#include <iostream>
using namespace std;

void solve() {
    int x, y;
    cin >> x >> y;

    int sum = x + y;
    int rx = 0, ry = 0;

    for (int sh = 30; sh >= 0; sh--) {
        if ((sum & (1 << sh)) != 0) {
            // set bit - means 1 in that position
            // we need to maximise x only then ops will be min
            if ((rx | (1 << sh)) <= x) {
                rx = rx | (1 << sh);
            } else {
                ry = ry | (1 << sh);
            }
        }
    }

    cout << sum << " " << x - rx << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}