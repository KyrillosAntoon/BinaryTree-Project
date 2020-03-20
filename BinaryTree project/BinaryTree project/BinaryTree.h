#pragma once
#include "TreeNode.h"
class BinaryTree
{
private:
	TreeNode* root;
	TreeNode* add(Game* g, TreeNode* p);

	// Checks if a game exists
	bool contains(std::string key, TreeNode* p);

	// 3 different ways to display the result
	void displayPostOrder(TreeNode* p);
	void displayPreOrder(TreeNode* p);
	void displayInOrder(TreeNode* p);

	// Search function to find a specific game
	Game* search(std::string key, TreeNode* p);
public:
	// Constructor
	BinaryTree();
	// These methods call their mirror methods that are private
	void add(Game* g);
	bool isEmpty();
	bool contains(std::string key);
	void displayPostOrder();
	void displayPreOrder();
	void displayInOrder();
	Game* search(std::string key);
	//*********************************************************
};