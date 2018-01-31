/*
 * Alex Young
 * Zuul Header file
 */

// guards
#ifndef ZUUL_H
#define ZUUL_H

#include <iostream>
#include <vector>
#include <cstring>
#include "room.h"

// I have a struct that stores my item
// Each item has a name, description, and room it points to
// I never change anything inside the item, so it is const - father showed me this
struct Item {
	const char *name;
	const char *description;
	const Room *room;
};

// zuul class is the one that makes the game
class Zuul {

	public:
		Zuul(); // this will make everything
		~Zuul();
		void play(); // this will run the game
		
	private:
		vector<Item *> inventory;
		vector<const Room *> room;


};

#endif
