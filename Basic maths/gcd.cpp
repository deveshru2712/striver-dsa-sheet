#include <bits/stdc++.h>
using namespace std;

void solve(int a, int b) { 
    // 1 =< gcd =< min(a,b) 
    // Time complexity is O(min(a,b))

    int gcd_of_num=1;
    int min_num=a<b?a:b;
    for(int i=1;i<min_num;i++){
        if(a%i==0 && b%i==0){
            gcd_of_num=i;
        }
    }
    cout<<gcd_of_num<<"\n";

    // here is another approach it does improve but in the worst case tl is still the same
    for(int i=min_num;min_num>=1;i--){
        if(a%i==0 && b%i==0){
            cout<<i<<"\n";
            break;
        }
    }

    
    // here is another approch with much better tl of log min(a,b) with base of phi.

    while (a>0 && b>0)
    {
        if(a>b) a=a%b;
        else b=b%a;
    }

    if(a==0){
        cout<<b<<"\n";
    }else{
        cout<<a<<"\n";
    }
}

int main() {
    int a,b;
    cin >> a>>b;
    solve(a,b);
    return 0;
}