#include<iostream>
using namespace std;
#define V 4
bool isSafe(int board[n][n], int row, int col){
	for(int i=0;i<col;i++){
		if(board[row][i])
		return false;
	for(int i=row,j=col;i>0,j>0;i--,j--)
	    if(board[i][j])
	    return false;
	}
	for(int i=row,j=col;i<n,j>0;i++,j--)
		if(board[i][j])
		return false;
		
	return true;	
}
bool utility(int board[n][n], int col){
	if(col>=n) return true;
	
	for(int i=0;i<n;i++){
		if(isSafe(board[n][n],i,col))
			
			board[i][col]=1;
			if(utiltiy(board[n][n],col+1) return true;
			
			board[i][col]=0;
	}
}

bool NQueen(){
	int n;
	printf("Enter the size of chess board");
	scanf("%d",&n);
	int board[n][n];
	if(utilityNQ(board,0) == false){
		printf("NO sol");
		return false;
	}
	else 
	{ print(board);
	return true;
    }
}
int main(){
  NQueen();	
  return 0;
}
