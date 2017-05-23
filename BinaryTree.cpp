#include "BinaryTree.h"


BinaryTree::BinaryTree()
{
}


BinaryTree::~BinaryTree()
{
}




BinaryTree* BinaryTree::treeInsertion(int key, Node*  root)
{
	if (!root)
	{
		root = new Node(key);
	}
	/*else if (key < root->key)
	{
		root->Left = treeInsertion(key, root->left)
	}*/
	return &BinaryTree();
}
