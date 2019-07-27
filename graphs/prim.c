/*Prim's algorithm*/
//Minimum spanning tree

#include<stdio.h>
#define MAX 10
#define infinty 999999
#define NIL -1
#define temp 0
#define perm 1
struct edge{
	int u;
	int v;
};
void createG(){
	int n,max_edges,origin,destin;
	max_edges=n*(n-1);
	int i,j,wt;
	for(i=0;i<max_edges;i++){
		for(j=0;j<max_edges;j++){
			printf("enter the source and destination");
	        scanf("%d%d",&origin, &destin);
	        if(origin<0 || origin>n-1 || destin <0 || destin>n-1) 
			{
			i--;
			continue; 
			}
			printf("wt");
			scanf("%d",&wt);
			adj[origin][destin]=wt;
		}
	}
	
}
int main(){
	
	struct edge tree[MAX];int root;
	createG();
	printf("enter root");
	scanf("%d", &root);
	maketree(root, tree);
	printf("display");
	for( int i=0;i<n;i++){
		printf("%d ->",tree[i].u);
		printf( " %d", tree[i].v);
		wt_tree+=adj[tree[i].u][tree[i].v];
	}
	printf("weight of mst is %d\n", wt_tree);
	
}
void maketree(int root,struct edge tree[MAX]){
	
	int current,i,count=0;
	for(i=0;i<n;i++){
		predecessor[i]=NIL;
		length[i]=infinty;
		status[i]=temp;
		}
		
		length[r]=0; // length of root vertex is 0
		while(1){
			
			
			current=min_temp();
			if(current==NIL){
				if(count==n-1)
				return;
				else
				printf("spanning tree not present");exit(1);
			}
			status[current]=perm;
			if(current!=root){
				count++;
				tree[count].u=predecessor[current];
				tree[count].v=current; 
			}
			for(i=0;i<n;i++){
				if(adj[current][i]>0 && status==temp)
				  if(adj[current][i]<length[i])
				{
					predecessor[i]=current;
					length[i]=adj[current][i];
				}
			}
			
			
		}
}
int min_temp(){
	int min=infinity;
	int k=-1;            // minimum vertex
	for(i=0;i<n;i++){
		if(status[i]==temp && length[i]<min){
			min=length[i];
			k=i;
		}
		
	}
	return k;
}
