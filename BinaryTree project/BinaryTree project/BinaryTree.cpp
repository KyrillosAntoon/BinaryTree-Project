#include "BinaryTree.h"
#include <iostream>

BinaryTree::BinaryTree()
{
	root = nullptr;
}
bool BinaryTree::isEmpty()
{
	return root == nullptr;
}
void BinaryTree::add(Game* g)
{
	root = add(g, root);
}
TreeNode* BinaryTree::add(Game* g, TreeNode* p)
{
	if (p == nullptr)
	{
		p = new TreeNode(g);
	}
	else
	{
		if (g->key < p->key)
		{
			p->left = add(g, p->left);
		}
		else
		{
			p->right = add(g, p->right);
		}
	}
	return p;
}

bool BinaryTree::contains(std::string key)
{
	return contains(key, root);
}

bool BinaryTree::contains(std::string key, TreeNode* p)
{
	if (p == nullptr)
	{
		return false;
	}
	else if (p->key == key)
	{
		return true;
	}
	else if (key < p->key)
	{
		return contains(key, p->left);
	}
	else
	{
		return contains(key, p->right);
	}
}

void BinaryTree::displayPostOrder()
{
	displayPostOrder(root);
}

void BinaryTree::displayPostOrder(TreeNode* p)
{
	if (p != nullptr)
	{
		displayPostOrder(p->left);
		displayPostOrder(p->right);
		p->game->display();
	}
}
void BinaryTree::displayPreOrder()
{
	displayPreOrder(root);
}

void BinaryTree::displayPreOrder(TreeNode* p)
{
	if (p != nullptr)
	{
		p->game->display();
		displayPreOrder(p->left);
		displayPreOrder(p->right);

	}
}
void BinaryTree::displayInOrder()
{
	displayInOrder(root);
}

void BinaryTree::displayInOrder(TreeNode* p)
{
	if (p != nullptr)
	{
		displayInOrder(p->left);
		p->game->display();
		displayInOrder(p->right);

	}
}


Game* BinaryTree::search(std::string key, TreeNode* p)
{

	if (p != nullptr)
	{

		if (key == p->key)
		{
			return p->game;
		}
		else if (key < p->key)
		{
			return search(key, p->left);
		}
		else
		{
			return search(key, p->right);
		}

	}
}

Game* BinaryTree::search(std::string key)
{
	return search(key, root);
}

