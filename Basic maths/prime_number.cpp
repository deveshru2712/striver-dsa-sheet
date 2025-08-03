#include <bits/stdc++.h>
using namespace std;

void solve(int n) { 
    int count=0;
     for(int i=1;i*i<=n;i++){
        if(n%i==0){
            count++;
            if(n/i!=i){
                count++;
            }
        }
     }

     if(count==2){
        cout<<true<<"\n";
     }else{
        cout<<false<<"\n";
     }
}

int main() {
    int n;
    cin >> n;
    solve(n);
    return 0;
}