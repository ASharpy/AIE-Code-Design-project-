#include "BinaryTree.h"


BinaryTree::BinaryTree()
{
}


BinaryTree::~BinaryTree()
{
}

//bool BinaryTree::isLeaf()
//{
//	return (Root == nullptr);
//}




void BinaryTree::treeInsertion(int key, Node*  root)
{
	if (!root)
	{
		root = new Node(key);
	}
	else if (key < root->key)
	{
		treeInsertion(key, root->Left);
	}
	else if (key > root->key)
	{
		treeInsertion(key, root->right);
	}
}
