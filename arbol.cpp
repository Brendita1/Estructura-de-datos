#include <iostream>
#include <queue>
#include <vector>
using namespace std;
struct Node{
	int value;
	Node *left;
	Node *right;
};
Node *createNewNode(int);
void insertNode(Node *&, int);
void menu();
void InOrder(Node *);
void PostOrder(Node *);
void PreOrder(Node *);
void LevelOrder(Node *);
int IsBST(Node *);
Node *Tree = NULL;  

int main(){
	menu();
	return 0;
}





Node *createNewNode(int data){
	Node *new_node=new Node();
	new_node->value=data;
	new_node->left=NULL;
	new_node->right=NULL;
	return new_node;
}
void insertNode(Node *&Tree, int data){
	if(Tree==NULL){
		Node *new_node= createNewNode(data);
		Tree= new_node;
	}
	else{
		int rootValue=Tree->value;
		if(data <rootValue){
			insertNode(Tree->left,data);
		}
		else{
			insertNode(Tree->right,data);
		}
		
	}
}
void menu(){
	int data, option;
	cout<<"\t\tMENU"<<endl;
	cout<<"1.Add an element for a binary search tree"<<endl;
	cout<<"2.Print the tree as a in-order"<<endl;
	cout<<"3.Print the tree as a pre-order"<<endl;
	cout<<"4.Print the tree as a post-order"<<endl;
	cout<<"5.Exit"<<endl;
	cout<<"Choose an option:";
	cin>>option;
	do{
	
	switch(option){
		case 1:
			cout << "Give a value to add at the tree: ";
			cin>>data;
			insertNode(Tree,data);
			break;
		case 2:
			InOrder(Tree);
			cout<<"\n";
			system("pause");
			break;
		case 3:
			PreOrder(Tree);
			cout<<"\n";
			system("pause");
			break;
		case 4:
			PostOrder(Tree);
			cout<<"\n";
			system("pause");
			break;
		case 5:
			LevelOrder(Tree);
			cout<<"\n";
			system("pause");
			break;
		case 6:
			int x;
			x=IsBST(Tree);
			
			if(x==1){
			cout<<"The tree is a Binary Search Tree"<<endl;
				
			}else {
			cout<<"The Tree is not a Binary Search Tree"<<endl;
			
			
			system("pause");

			break;
	}
	cout<<"If you have finished to add nodes, press any other option "<<endl;
	cout<<"1.Add another element for a binary search tree"<<endl;
	cout<<"2.Print the tree as a in-order"<<endl;
	cout<<"3.Print the tree as a pre-order"<<endl;
	cout<<"4.Print the tree as a post-order"<<endl;
	cout<<"5.Print the tree as a level-order"<<endl;
	cout<<"6.Chek if a tree is Binary Search Tree"<<endl;
	cout<<"7.Exit"<<endl;
	cout<<"option: ";
	cin>>option;
}while(option!=7);
}

void InOrder(Node *Tree){
	if(Tree==NULL){
		return;
	}
	else{
		InOrder(Tree->left);
		cout<<Tree->value<<" ";
		InOrder(Tree->right);
	}
}

void PostOrder(Node *Tree){
	if(Tree==NULL){
		return;
	}
	else{
		PostOrder(Tree->left);
		PostOrder(Tree->right);
		cout<<Tree->value<<" ";
	}
}
void PreOrder(Node *Tree){
	if(Tree==NULL){
		return;
	}
	else{
		cout<<Tree->value<<" ";
		PreOrder(Tree->left);
		PreOrder(Tree->right);
	}
}

void LevelOrder(Node *Tree){
	if(Tree==NULL){
		return;
	}
	else{
	queue<Node*>Q;
	Q.push(Tree);
	while(!Q.empty()){
		Node* curr = Q.front();
		cout<<curr->value<<" ";
		if(curr->left!=NULL) Q.push(curr->left);
		if(curr->right!=NULL)Q.push(curr->right);
		Q.pop();
		 
	}
	}
}


int IsBST(Node *Tree){


if(Tree==NULL) return 1;



if(Tree->left!=NULL && Tree->left->value>Tree->value)
return 0;	


if(Tree->right!=NULL && Tree->right->value<Tree->value)
return 0;	

if(!IsBST(Tree->left)||!IsBST(Tree->right))
return 0;
	
return 1;	
}


