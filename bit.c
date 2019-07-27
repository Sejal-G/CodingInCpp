#include<stdio.h>
int main(){
	int t,n,bit=1,nib=0,byt=0;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		int fun(n)
		{while(n){
			
			if(n>2)
			{
			bit--;
			nib++;
			n-=2;
		    }
			if(n>8){
				byt++;
				nib--;
				n=n-8;
			}
			if(n>16){
				byt++;
				bit+=2;
				fun(n);
				fun(n);
			}
					    
		   	
		}
		printf("%d %d %d",bit,nib,byt);
	}
}
}


