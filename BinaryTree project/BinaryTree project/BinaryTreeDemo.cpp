// Binary Tree Complete
// Kyrillos Antoon

#include <iostream>
#include "BinaryTree.h"
using namespace std;

int main()
{
	BinaryTree tree;					// Define a value for the new tree
	int input = 0;						// variable for user input
	const int QUIT = 6;					// variable for quitting
	string key, gameName, publisher;	// variables for game information
	Game* g = 0;						// pointer for game

	//Hardcoded values for testing
	//
	//tree.add(new Game("gw2", "Guild Wars 2", "Arenanet"));
	//tree.add(new Game("bf1", "Battlefield 1", "EA"));
	//tree.add(new Game("fo4", "Fallout 4", "Bethesda"));
	//tree.add(new Game("bo4", "Black Ops 4", "Activision"));
	//tree.add(new Game("mario", "Super Mario", "Nintendo"));
	//
	//*******************************************************

	do
	{
		// User instructions

		cout << endl << "MENU:" << endl;
		cout << "1.  Is tree empty?" << endl;
		cout << "2.  Add game." << endl;
		cout << "3.  Is game in tree?" << endl;
		cout << "4.  Retrieve game data." << endl;
		cout << "5.  Display all games." << endl;
		cout << "6.  End program." << endl << endl;

		cin >> input;										// Read in the input

		switch (input)
		{
		case 1:												// If user enters 1, check if the tree is empty
			if (tree.isEmpty())
				cout << "Tree is empty." << endl;
			else
				cout << "Tree contains data." << endl;
			break;

		case 2:												// If user enters 2, then ask the user for the game info and add it
			cout << "Game ID:  ";
			cin >> key;
			cout << "Game Name:  ";
			cin >> gameName;
			cout << "Publisher:  ";
			cin >> publisher;
			tree.add(new Game(key, gameName, publisher));
			break;

		case 3:												// If user enters 3, then ask for the id of the game and see if exists in the tree
			cout << "Enter ID of Game:  ";
			cin >> key;
			if (tree.contains(key))
				cout << "Yes, game " << key << " is in the database." << endl;
			else
				cout << "No, game " << key << " is not in the database." << endl;
			break;

		case 4:												// If user enters 4, then ask user for id, and display the information for that game
			cout << "Enter ID of Game:  ";
			cin >> key;
			g = tree.search(key);
			if (g->key != key)
			{
				cout << "Game " << key << " was not found." << endl;
			}
			else
				g->display();
			break;

		case 5:												// If user enters 5, then display all the contents of the tree in 3 different ways
			cout << endl << "Preorder Display:" << endl;
			tree.displayPreOrder();
			cout << endl << "Inorder Display:" << endl;
			tree.displayInOrder();
			cout << endl << "Postorder Display:" << endl;
			tree.displayPostOrder();
			break;

		case 6:
			cout << "Ending program..." << endl;			// If user enters 6, then quit
			break;

		default:											// If user enters anything else, then print error message
			cout << "ERROR:  Invalid option. Try again." << endl;
		}
	} while (input != QUIT);

	cout << endl;
	system("pause");
	return 0;
}