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
			Root = nullptr;
		};
		int key;
		Node *Left;
		Node *right;
		Node * Root;
	};

	
	BinaryTree();
	virtual ~BinaryTree();
	void treeInsertion(int key, Node* node);

	//bool isLeaf();
	//BinaryTree searchTree();
	
	//BinaryTree treeDeletion();

private:
	
	

};

