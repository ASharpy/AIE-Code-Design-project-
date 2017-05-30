#pragma once

template<class T>
class BinaryTree
{
private: 

	class TreeNode
	{
	public:
		TreeNode(T key)
		{
			key = key;
			Left = nullptr;
			right = nullptr;
			Root = nullptr;
		};
		~TreeNode() {};

		int key;
		TreeNode *Left;
		TreeNode *right;
		TreeNode * Root;
	
		
	};



	//bool isLeaf();
	//BinaryTree searchTree();
	
	//BinaryTree treeDeletion();

public:
	
	

};

