#include<iostream>
using namespace std;

int main(){
	printf("5");
	long int h;int t,n,i=0;long int max=0;
	scanf("%d",&t);
	while(t--){
	  scanf("%d %ld", &n,&h);
	 long int a[n];
	  while(i<n){
	  	scanf("%d",&a[i]);
	  	i++; if(a[i]>max){
	  		max=a[i];
		  }
	  }
	int mid,hours;
	int beg=1,end=max;
	while(beg<end){
		mid=(beg+end)/2;
		
		for(int i=0;i<n;i++)
		{
		if(a[i]<mid)
		hours+=1;
		else
			hours+=(1 + a[i]/mid);
		}
		if(hours<h)
			end=mid-1;
		else if(hours>h){
			beg=mid+1;
		}	
		else {
		printf("%d",mid); exit(0);}
	
	}
}
}
