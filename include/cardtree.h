#include<iostream>

#include"cards.h"

class Cardtree{
	public:

		Cardtree() : head = NULL{}

		bool addCards(float val, Card[2] cards){
			if(head == NULL){
				head = Node(NULL, NULL, val, cards);
			}

			for(Node ptr = head;;){
				if(val > ptr.val){
					if(ptr.right == NULL){
						ptr.right = Node(NULL, NULL, val, cards);
						break;
					}else{
						ptr = ptr.right;
					}
				}else if(val <ptr.val){
					if(ptr.left == NULL){
						ptr.left = Node(NULL, NULL, val, cards);
						break;
					}else{
						ptr = ptr.left;
					}
				}
			}
		}

	private:
		struct Node{
			Node(Node left, Node right, float val, Card[2] cards) : 
			this->left = left, this->right = right, 
			this->val = val, this->cards = cards{}

			Node left, right;
			float val;
			Card[2] cards;
		};
	
		Node head;
};
