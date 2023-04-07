#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MxN 2502


int main () {
      ll n;
      cin >> n;
      int a[n];
      for (int i = 0; i < n; i++)
        cin >> a[i];
    
    int ans = 0;
    vector<int>dp;
	for (int i : a) {
		int pos = lower_bound(dp.begin(), dp.end(), i) - dp.begin();
		if (pos == dp.size()) {
			// we can have a new, longer increasing subsequence!
			dp.push_back(i);
		} else {
			// oh ok, at least we can make the ending element smaller
			dp[pos] = i;
		}
	}

      cout << dp.size() << endl;
}
