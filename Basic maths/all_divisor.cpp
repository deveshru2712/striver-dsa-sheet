#include <bits/stdc++.h>
using namespace std;

void solve(int n) {
    // Time complexity of O(n)

	// for(int i=1; i<=n; i++) {
	// 	if(n%i==0) {
	// 		cout<<i<<" ";
	// 	}
	// }
	// cout<<"\n";

    // Time complexity of O(sqrt(n))
    
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<i<<" ";
            if(n/i!=i){
                cout<<n/i<<" ";
            }
        }
    }
    cout<<"\n";

}

int main() {
	int n;
	cin >> n;
	solve(n);
	return 0;
}