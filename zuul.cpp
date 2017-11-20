/* Alex Young
 * C++ Galbriath P6
 * Zuul: Pokemon
 * This program will create text based adventure game.
 * Last updated: 11/16/2017
 */

#include <iostream>
#include <vector>
#include <cstring>
#include "room.h"

using namespace std;

// need struct of items
struct Item {
	char name[30];
	char description;
	bool carried = true;
	Room *location;
};

void inventory(vector<Item>&);
void go();
void get();
void drop();
void quit();

// I will need a vector of items

// I will need a class of rooms and a vector of room pointers

int main() {
	char command[25];
	vector<Item> itemVector;

	// first I need to add in all my room pointers
	Room *NewBark = new Room("New Bark Town", "A town where the wind blows and tells of impending change.");
	Room *Cherrygrove = new Room("Cherrygrove City", "A city where you can smell small flowers and a sea breeze.");
	Room *Violet = new Room("Violet City", "This old village is still surrounded by trees and other scenery.");
	Room *Azelea = new Room("Azalea Town", "A town where people and Pokemon live together in simple harmony.");
	Room *Goldenrod = new Room("Goldenrod City", "A developing city where people and Pokemon come and go as they like.");
	Room *Ecruteak = new Room("Ecruteak City", "A city that even now bears the marks of its history.");
	Room *Olivine = new Room("Olivine City", "A city where you can hear the melody of the sea.");
	Room *Cianwood = new Room("Cianwood City", "A beachside city that has benefitted greatly from the sea.");
	Room *Mahogany = new Room("Mahogany Town", "A town with a suspicious air to it. It's the hiding place for ninjas.");
	Room *Blackthorn = new Room("Blackthorn City", "A mysterious mountain village cut into a rock face.");
	Room *Cave = new Room("Dark Cave", "A dark, difficult-to-navigate tunnel that runs beneath the Johto region.");
	Room *Forest = new Room("Ilex Forest", "A large forest full of trees that are used to make charcoal.");
	Room *Park = new Room("National Park", "A spacious and beautiful park. It's conected to the Pokeathlon Dome.");
	Room *Islands = new Room("Whirl Islands", "Four islands that are protected by whirlpools and are difficult to reach.");
	Room *Safari = new Room("Safari Zone", "A place where you can experience wild thrills safely.");
	Room *Lake = new Room("Lake of Rage", "A huge lake full of clear, blue water.");
	Room *Path = new Room("Ice Path", "A cave that connects Route 44 to Blackthorn City.");
	Room *Falls = new Room("Tohjo Falls", "The Tohjo waterfall that links the Kanto and Johto regions.");
	Room *Plateau = new Room("Indigo Plateau", "The fate of many Trainers aiming for the top rests here.");
	

	// then I need to add exits to my rooms
	// Stone gave idea for setExit(x, room)
	// x is a number 0-3
	// N = 0 E = 1 S = 2 W = 3
	NewBark -> setExit(1, Falls);
	Falls -> setExit(3, NewBark);
	city_1 -> setExit(3, place_1);
	city_2 -> setExit(1, place_1);
	city_2 -> setExit(0, city_3);

	// next I need to add all my items

	// need to play the game with win conditions

	return 0;
}

// I will need a function to create items
