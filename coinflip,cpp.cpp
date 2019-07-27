#include<iostream>
using namespace std;
int main(){
	int i,q,g,n,t,ans;
	while(t--){
	    scanf("%d",&g);
		while(g--){
			scanf("%d%d%d", &i,&n,&q);
			printf("%d",n);
			if(i==1) //head is intial
			{ if(q==2) //no of tails if head is initial
				cout << (n+1)/2;
			 else if(q==1) // no of heads if head is initial
				cout << (n-1)/2;
		    }
		    else//tail is initial
			{
		      if(q==1)// no of heads if tail is intial
			   cout << (n+1)/2;
			  else if(q==2) // no of tails if tail is initial
			   cout << (n-1)/2; 		
			}
	cout << endl;
	    }
	}
	return 0;
}
