#pragma once
#include <string>
#include "Game.h"
class TreeNode
{
	// Each tree node contains a game value, a reference to the left/right nodes and the key
public:
	std::string key;
	Game* game;
	TreeNode* left;
	TreeNode* right;


	TreeNode(Game* g)
	{
		key = g->key;
		game = g;
		left = 0;
		right = 0;
	}
};