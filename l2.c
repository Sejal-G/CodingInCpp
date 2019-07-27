#include<stdio.h>
int main(){
	int t,n,j,m,max=0;
	scanf("%d",&t);
	while(t--){
		 int m=0,j, a[1000];
			scanf("%d %d",&n,&m);int x,y;
			while(n--){
				
				scanf("%d %d",&x, &y);
				if(y>max) max=y;
				for(j=x;j<y;j++){
					a[j]=0;
					
				}
			}
			while(m--){y=0;
				scanf("%d",&x);if(x>max) {printf("-1"); break;}
				if(a[x]==0) printf("0");
				else { //n=x;
					while(a[x]!=0){ x++;y++;
					}
				printf("%d",y);
				}
				
			}
			
			
		}
		
	}

