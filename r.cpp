#include<stdio.h>
int a[1000000];
int main(){
	int i=0,count,max;
	while(i<=1000000){
		a[i++]=0;
	}
	int n,t,r;
	scanf("%d",&t);
	while(t--){
		count=max=0;
		scanf("%d",&n);
		while(n--){
			scanf("%d",&r);
			a[r]++;
			if(max<r) max=r;
		}
	int flag=0;
	while(max--){
		if(a[max]){
	       if(flag==0){
	       	  if(a[max]%2==0){
	       	  	  count+=(a[max]*a[max]-1)/2;
	       	  	  flag=0;
				 }
			  else{
			  	  count+=(a[max]-1)*(a[max]-2)/2;
			  	  flag=1;
			  }
		}
			else
			  if(a[max]%2){
	       	  	  count+=a[max]+(a[max]-1)*(a[max]-2)/2;
	       	  	  flag=0;
				 }
			  else{
			  	  count+=a[max]+(a[max-1]*a[max]-2)/2;
			  	  flag=1;
			  }  
		   }
		   	
		}
		
	}
	printf("%d\n",count);
	
	  	
	}

