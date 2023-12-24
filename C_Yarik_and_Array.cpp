#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long maxSum = a[0];
        long long currentSum = a[0];

        for (int i = 1; i < n; i++) {
            if ((a[i] % 2 == 0 && a[i - 1] % 2 != 0) || (a[i] % 2 != 0 && a[i - 1] % 2 == 0)) {
                currentSum += a[i];
            } else {
                currentSum = a[i];
            }

            maxSum = max(maxSum, currentSum);
        }

        cout << maxSum << endl;
    }

    return 0;
}
