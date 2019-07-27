#include<stdio.h>
#include<stdlib.h>
struct node{
	int t;
	struct node* next;
	struct node* prev;
};
struct node* root=NULL;
int main(){
	int t,n;
	scanf("%d",&t);
	while(t--){
		printf("hehe");
		scanf("%d",&n);
		while(n--)
		{
		struct node* temp=(struct node*)malloc(n*sizeof(struct node));
	    scanf("%d",temp->t);
	    if(root==NULL){
	    	printf("hehe");
	    	root->next=temp;
	    	temp->prev=root;
		}
		else{ printf("hehe");
		while(root->next!=root)root=root->next;
		temp->prev=root;
		root->next=temp;
	}
		temp->next=root;
		
	}
	struct node* temp=(struct node*)malloc(n*sizeof(struct node));
    temp=root;while(temp->next!=root){
	printf("%d",temp->t);
	}
}
}
