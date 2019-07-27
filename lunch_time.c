#include<stdio.h>
int main(){
	int t,n,x,y;
	scanf("%d",&t);
	while(t--){
		int ans=0;
		scanf("%d",&n);
		
		while(n--){
			scanf("%d %d",&x,&y);
			if((y-x)>5) {
		ans++;}
			
		}
		printf("%d\n",ans);
	}
}
