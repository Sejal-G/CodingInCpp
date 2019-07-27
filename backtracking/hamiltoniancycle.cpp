#include<iostream>
using namepsace std;
bool isSafe(int v, bool graph[v][v], int path[],int pos)
{
	if(graph[path[pos-1]][v]==0) 
		return false;
	for(int i=0;i<pos;i++){
		if(path[i]==v)
		   return false;
		return true;
	}	
}
utility(bool graph[v][v], int path[],int pos){
	if(pos==v){
		if(graph[path[pos-1]]path[0]==1)
		return true;
		else return false;
	}
	for(int i=1;i<v;i++){
		if(isSafe(i,graph,path,pos)){
			path[pos]=i;
			if(utility(graph, path,pos+1)==true)
			return true;
			path[pos]=-1;
		}
	}
	return false;
}
bool hamcycle(bool graph[v][v]){
	int *path= new int[V];
	for( int i=0i<V;i++){
		path[i]=-1;
	}
	path[0]=0;
	if(utility(graph,path,l)==false)
	return false;
	else 
	return true;
}

int main(){
	hamcycle(graph[V][V])
}
