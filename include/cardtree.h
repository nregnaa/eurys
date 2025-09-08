#include"card.h"

class Cardtree{
	public:
		Cardtree() : root(NULL){}

		bool addCards(float, Card[2], Node*&);

		bool balance();

		bool shiftRight();

		bool shiftLeft();

	private:
		struct Node{
			Node(Node* left, Node* right, float val, Card[2] cards) : 
			left(left), right(right), val(val), cards(cards){}

			int height();
			void setHeight();

			Node* left, right;
			float val;
			Card[2] cards;
			int height;
		};
	
		Node* root;
};

bool Cardtree::addCards(float val, Card[2] cards, Node*& ptr = root){
	if(ptr == NULL){
		*root = Node(NULL, NULL, val, cards);
	}else if(val > ptr.val){
		addCards(val, cards, ptr.right);
	}else(val < ptr.val){
		addCards(val, cards, ptr.left);
	}
}

bool Cardtree::balance(){}

bool Cardtree::shiftRight(Node*& arg){
	if(Node* root = arg->left){
		arg->left = root->right;
		root->right = arg;
		arg = root;
		return true;
	}
	return false;
}

bool Cardtree::shiftLeft(Node*& arg){
	if(Node* root = arg->right){
		arg->right = root->left;
		root->left = arg;
		arg = root;
		return true;
	}
	return false;
}

int Cardtree::Node::height(){
	if(this == NULL){
		return -1;
	}else{
		return height;
	}
}

void Cardtree::Node::setHeight(){
	
}
