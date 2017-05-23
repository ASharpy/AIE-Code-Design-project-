#pragma once
class BinaryTree
{
public:
	struct Node
	{
		Node(int key) 
		{
			key = key;
			Left = nullptr;
			right = nullptr;
		};
		
		int key;
		Node *Left;
		Node *right;


	};
	
	BinaryTree();
	virtual ~BinaryTree();

	//BinaryTree searchTree();
	BinaryTree* treeInsertion(int key, Node* node);
	//BinaryTree treeDeletion();

private:
	
	Node * Root;

};

