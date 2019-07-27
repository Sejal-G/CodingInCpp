#include<iostream>
using namespace std;
bool isSafeint v, bool graph[v][v], int color[],int c){
	for(int i=0;i<V;i++){
		if(graph[V][i] && c==color[i])
		return false;
	}
	return true;
}
bool utility(bool graph[v][v], int m,int color,int V){
	if(v==V) return true;	
	
	for(int c=1;c<=m;c++){
		if(isSafe(v,graph,color,c)){
			color[v]=c;
			if(utility(graph,m,color,v+1))
			return true;
			
			color[v]=0;
		}
	}
	return false;
}
bool graphColoring(bool graph[v][v], int m,int color[], int v){
	int *color=new int[v];
	for(int i=0;i<v;i++){
		color[i]=0;
	}
	if(utility(graph,m,color,0)==false)
		return false;
		
		return true;
}
int main(){
	
	graphColoring(graph[v][v], colors)
	return 0;
}
