#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> s(n + 1);
	vector<int> t(n + 1);
	s.at(0) = 0;
	t.at(0) = 0;
	
	int max_diff = 0;
	for (int i = 1; i <= n; i++) {
	    int num;
	    cin >> num;
	    s.at(i) = s.at(i - 1) + num;
	    cin >> num;
	    t.at(i) = t.at(i - 1) + num;
	    
	    int diff = s.at(i) - t.at(i);
	    if (abs(max_diff) < abs(diff)) {
	        max_diff = diff;
	    }
	}

	if (max_diff > 0) {
	    cout << 1 << " ";
	} else {
	    cout << 2 << " ";
	}
	cout << abs(max_diff) << endl;
	
	return 0;
}