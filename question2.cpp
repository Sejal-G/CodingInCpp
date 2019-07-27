#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
	int t,n,i,sum,j,ans,k;
	scanf("%d",&t);
	while(t--){
	   
	    int flag;
		scanf("%d",&n);
		int a[n];
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}i=0;ans=0;
		sum=a[i];
		while((n-i-1)>sum){
			flag=true;
			
			j=sum;k=i; //k tracks the position and j is no. of ppl who can be informed in a single day.
			while(j-- && k<n){
				sum+=a[++k];
				
				i++;
			}
			
			ans++;
			
		}
		if(flag==0){ printf("1");}
		else 
		printf("%d\n",ans+1); 
	
		
	}
return 0;	
}

