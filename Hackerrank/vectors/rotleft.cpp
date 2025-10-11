#include <bits/stdc++.h>
using namespace std;

// Complete the rotLeft function below.
vector<int> rotLeft(vector<int> a, int d) {
    int n = a.size();
    vector<int> rotated(n);
    
    d = d % n;
    
    for (int i = 0; i < n; i++) {
        rotated[i] = a[(i + d) % n];
    }
    
    return rotated;
}

int main()
{
    int n, d;
    cin >> n >> d;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> result = rotLeft(a, d);

    for (int i = 0; i < n; i++) {
        cout << result[i];
        if (i < n - 1) cout << " ";
    }
    cout << "\n";

    return 0;
}

