#pragma once
#include <iostream>
#include <string>


// Each game has a key, a name, and a publisher, and a display function to dispay it nicely on the console.
class Game
{
public:
	std::string key;
	std::string Name;
	std::string Publisher;

	Game(std::string i, std::string f, std::string l)
	{
		key = i;
		Name = f;
		Publisher = l;
	}

	void display()
	{
		std::cout << "Game: " << Name << " Published By: " << Publisher << " ID: (" << key << ")";
		std::cout << std::endl;
	}
};