#include <bits/stdc++.h>
#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxn = INT_MIN;
    int minn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        maxn = max(maxn, arr[i]);
        minn = min(minn, arr[i]);
    }
    cout << maxn << " " << minn << endl;
    return 0;
}