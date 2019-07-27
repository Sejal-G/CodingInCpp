#include<iostream>
using namespace std;
int main(){
	int t,n;
	scanf("%d",&t);
	while(t-- && scanf("%d",&n)){
		printf("In");
		int a[n],b[n];
		for(int i=0;i<n;i++)
		{
		scanf("%d",&a[i]);
		b[i]=a[i];
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<i;j++){
			
				if(a[i]==a[j]){
					for(int k=0;k<n;k++){
						if(a[k]==j+1) flag++; if(a[k]==i+1) flag++;
					}
					if(flag==2){
					   printf("Truly Happy %d\n",t);break;
				    }
				}
			}
		}
		if(flag==0) printf("Poor Chef\n");
	}
}
