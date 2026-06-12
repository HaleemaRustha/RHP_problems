#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

#define ll unsigned long long int

void solve() {
    int N, M;
    cin >> N >> M;

    vector<int> a(N), b(M);

    for (int i = 0; i < N; i++) cin >> a[i];
    for (int i = 0; i < M; i++) cin >> b[i];

    int count = 0;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for (int ai = N - 1, bi = M - 1; ai >= 0 && bi >= 0; ) {
        if (b[bi] <= a[ai] * 2) {
            count++;
            bi--;
            ai--;
        } else {
            bi--;
        }
    }

    cout << count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}