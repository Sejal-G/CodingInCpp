#include<iostream>
using namespace std;
int main(){
	int t,ans,n,k;
	scanf("%d",&t);
	while(t--){
		ans=0;
		scanf("%d %d", &n,&k);
		int a[n];int i=0;
		while(i<n)
		{
		scanf("%d",&a[i]);
		i++;
		if(i){
			a[i]=a[i-1];
		}
		
		if(a[i]>k) ans+=a[i]/k;
	    }
	    
	    cout << ans << endl;
	
	}
}
