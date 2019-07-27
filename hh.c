#include<stdio.h>
int a[]={2,3,4,4,4,4,5,6,7,8,9,22};
int lower(int beg,int end)
	{ int mid;
	while(beg<end){
	 mid=(end+beg)/2;
	
	if(a[mid]>4){
		end=mid-1;
		
		//endu=mid;
		//printf("1\n");
	}
	else if(a[mid]<4){
		beg=mid;
		if(a[end]<4)
		return end;
		else end--;
	
	}
	else if(a[mid]==4){
		end=mid-1;
	
	}
	
	
	} return mid;
	//printf("%d",mid);
	//return mid;
	//lowerb=mid; 
	}
int main(){
	
	//search 4 and calc the frequency of 4.
	 int beg=0,end=11,mid;
	mid=lower(0,12);
 printf("%d",mid);
}
