#include<stdio.h>
#include<stdlib.h>
#define MAX 100
#define intial 1
#define visited 2
int n;
int adj[MAX][MAX];
int state[MAX]
int main(){
	createG();
	DF_traversal();
}
int main(){
	createG();
	DF_traversal();
}
void DF_traversal(){
	int v;
	for(v=0;v<n;v++){
		state[v]=initial;
	}
	printf("Enter starting node for DFS");
	scanf("%d", &v);
	DFS(v);	
	
}
void DFS(int v){
	int i;
	push(v);
	while(!isEmpty_stack()){
		v=pop();
		if(state[v]==initial){
			printf("%d", &v);
			state[v]=visited;
		}
		for(i=n-1; i>=0;i--){
			if(adj[v][i]==1 && state[i]=initial)
			    push(i);
		}
	}
}
void push(int v){
	if(top==(MAX-1))
	{
	printf("stack overflow");
	return;
    }
    top++;
    stack[top]=v;
}
 int pop(){
 	int v;
 	if(top==-1){
 		printf("stack underflow");
 		exit(1);
	 }
	 else {
	 	v=stack[top];
	 	top--;
	 	return v;
	 }
 }
 int is_empty(){
 	if(top==-1){
 		return 1;
 		
	 }
	 else return 0;
 }
 void createG(){
 	int i, max_edges,origin,destin;
 	printf("Enter nodes:");
 	scanf("%d", &n);
 	max_edges =n*(n-1);
 	
 	for(i=1;i<=max_edges;i++){
 		printf("orgin and destin");
 		scanf("%d %d",&origin, &destin);
 		if(origin>n || destin >n || origin < 0 || destin< 0 ){
 			printf("invalid");
 			i--;
		 }
		 else adj[origin][destin]=1;
	 }
 }
