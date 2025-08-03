#include <bits/stdc++.h>
using namespace std;

void sovle(int n){
    vector<int> digits ;
    int rem = 0;

    while(n>0){
        n=n/10; 
        rem=n%10;
        digits.push_back(rem);     
    }
    for(int a:digits) cout<<a;
}

int main(){
    int n;
    cin>>n;
    // get the digits from the numbers
    
    sovle(n);

    return 0;
}
