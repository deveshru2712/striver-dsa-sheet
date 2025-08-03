#include <bits/stdc++.h>
using namespace std;

void solve(int n) { 
    int sum=0;
    int dup=n;
    while(n>0){
       int last_digit=n%10;
       sum=sum+last_digit*last_digit*last_digit;
       n=n/10; 
    } 

    if(sum==dup){
        cout<<"true"<<"\n";
    }else{
        cout<<"false"<<"\n";
    }
}

int main() {
    int n;
    cin >> n;
    solve(n);
    return 0;
}