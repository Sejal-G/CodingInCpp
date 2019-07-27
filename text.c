/* Read input from STDIN. Print your output to STDOUT*/
#include<stdio.h>
int main()
{
    int n,i,ans=0;
	scanf("%d",&n);
	char c[n];
	for(i=0;i<n;i++) scanf("%c",&c[i]);
	int mid;int *beg,*end;
	mid=(n-1);
	printf("%d",mid);
	if(mid%2){
	*beg=mid/2-1;*end=mid/2+1;}
	else {*beg=mid/2; *end=mid/2+1;}
	    printf("t");
	        
	        while(beg || end){
	            if(*beg == *end)
	            {beg--;end++;}
	            else if(*(--beg) == *end){
	            end++;ans++;}
	            else if(*(++beg) == *(++end)){
	                beg--;ans++;}
	                else {beg--;ans+=2; printf("rr");}
	            }printf("f");
	            printf("%d",ans);
	            }


