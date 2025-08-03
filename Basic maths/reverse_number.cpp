#include <bits/stdc++.h>
using namespace std;

void solve(int n) {
    int rev_num=0;
    while(n>0){
        int last_digit=n%10;
        rev_num=(rev_num*10)+last_digit;
        n=n/10;
    }
    cout<<rev_num;
}

int main() {  
    int n;
    cin >> n;
    solve(n);
    return 0;
}