#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,count=0;
    cin >> n;
    while(n!=0)
    {
        count++;
        for(long long int i=2;i<=n;i++){
                if(n%i == 0)
                    {n-=i;
                    
                    break;
                    }
            }
    }    

    if(count){
        cout << count;
    }
}
