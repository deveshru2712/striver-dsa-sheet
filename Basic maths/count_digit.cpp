#include <bits/stdc++.h>
using namespace std;

void solve(int n) {
    vector<int> digits;
    
    if (n == 0) {
        digits.push_back(0); 
    } else {
        while (n > 0) {
            int rem = n % 10; 
            digits.push_back(rem);
            n = n / 10; 
        }
    }
    
    
    cout<<digits.size()<<"\n";
}

int main() {
    int n;
    cin >> n;
    solve(n);
    return 0;
}