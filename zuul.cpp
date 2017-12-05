/* Alex Young
 * C++ Galbriath P6
 * Zuul: Pokemon
 * This program will create text based adventure game.
 * Last updated: 12/4/2017
 */

#include <iostream>
#include <vector>
#include <cstring>
#include "room.h"

using namespace std;

// need struct of items
struct Item {
	const char *name;
	const char *description;
	bool carried = true;
	Room *location;
};

void go();
void get();
void drop();
void quit();

// I will need a vector of items
void items(char *name, vector<Item> inventory);

// I will need a class of rooms and a vector of room pointers

int main() {
	vector<Item> inventory;
	vector<Room*> room;

	// first I need to add in all my room pointers
	Room *NewBark = new Room((char*)"New Bark Town", (char*)"A town where the wind blows and tells of impending change.");
	Room *Cherrygrove = new Room((char*)"Cherrygrove City", (char*)"A city where you can smell small flowers and a sea breeze.");
	Room *Violet = new Room((char*)"Violet City", (char*)"This old village is still surrounded by trees and other scenery.");
	Room *Azalea = new Room((char*)"Azalea Town", (char*)"A town where people and Pokemon live together in simple harmony.");
	Room *Goldenrod = new Room((char*)"Goldenrod City", (char*)"A developing city where people and Pokemon come and go as they like.");
	Room *Ecruteak = new Room((char*)"Ecruteak City", (char*)"A city that even now bears the marks of its history.");
	Room *Olivine = new Room((char*)"Olivine City", (char*)"A city where you can hear the melody of the sea.");
	Room *Cianwood = new Room((char*)"Cianwood City", (char*)"A beachside city that has benefitted greatly from the sea.");
	Room *Mahogany = new Room((char*)"Mahogany Town", (char*)"A town with a suspicious air to it. It's the hiding place for ninjas.");
	Room *Blackthorn = new Room((char*)"Blackthorn City", (char*)"A mysterious mountain village cut into a rock face.");
	Room *Cave = new Room((char*)"Dark Cave", (char*)"A dark, difficult-to-navigate tunnel that runs beneath the Johto region.");
	Room *Forest = new Room((char*)"Ilex Forest", (char*)"A large forest full of trees that are used to make charcoal.");
	Room *Park = new Room((char*)"National Park", (char*)"A spacious and beautiful park. It's conected to the Pokeathlon Dome.");
	Room *Islands = new Room((char*)"Whirl Islands", (char*)"Four islands that are protected by whirlpools and are difficult to reach.");
	Room *Safari = new Room((char*)"Safari Zone", (char*)"A place where you can experience wild thrills safely.");
	Room *Mountain = new Room((char*)"Mt. Mortar", (char*)"A naturally large cavern that is incredibly spacious.");
	Room *Lake = new Room((char*)"Lake of Rage", (char*)"A huge lake full of clear, blue water.");
	Room *Path = new Room((char*)"Ice Path", (char*)"A cave that connects Route 44 to Blackthorn City.");
	Room *Falls = new Room((char*)"Tohjo Falls", (char*)"The Tohjo waterfall that links the Kanto and Johto regions.");
	Room *Plateau = new Room((char*)"Indigo Plateau", (char*)"The fate of many Trainers aiming for the top rests here.");
	//Room *Inventory = new Room((char*)"Inventory", (char*)"This is your inventory.")
	

	// then I need to add exits to my rooms
	// Stone gave idea for setExit(x, room)
	// x is a number 0-3
	// N = 0 E = 1 S = 2 W = 3
	NewBark -> setExit(1, Falls);
	Falls -> setExit(3, NewBark);
	Falls -> setExit(0, Plateau);
	Plateau -> setExit(2, Falls);
	NewBark -> setExit(3, Cave);
	Cave -> setExit(1, NewBark);
	Cave -> setExit(3, Cherrygrove);
	Cherrygrove -> setExit(1, Cave);
	Cave -> setExit(0, Blackthorn);
	Blackthorn -> setExit(2, Cave);
	Cherrygrove -> setExit(3, Violet);
	Violet -> setExit(1, Cherrygrove);
	Violet -> setExit(2, Azalea);
	Azalea -> setExit(0, Violet);
	Azalea -> setExit(3, Forest);
	Forest -> setExit(1, Azalea);
	Forest -> setExit(0, Goldenrod);
	Goldenrod -> setExit(2, Forest);
	Goldenrod -> setExit(0, Park);
	Park -> setExit(2, Goldenrod);
	Park -> setExit(0, Ecruteak);
	Park -> setExit(1, Violet);
	Violet -> setExit(3, Park);
	Ecruteak -> setExit(2, Park);
	Ecruteak -> setExit(3, Olivine);
	Olivine -> setExit(1, Ecruteak);
	Olivine -> setExit(2, Islands);
	Islands -> setExit(0, Olivine);
	Islands -> setExit(3, Cianwood);
	Cianwood -> setExit(1, Islands);
	Cianwood -> setExit(3, Safari);
	Safari -> setExit(1, Cianwood);
	Ecruteak -> setExit(1, Mountain);
	Mountain -> setExit(3, Ecruteak);
	Mountain -> setExit(1, Mahogany);
	Mahogany -> setExit(3, Mountain);
	Mahogany -> setExit(0, Lake);
	Lake -> setExit(2, Mahogany);
	Mahogany -> setExit(3, Path);
	Path -> setExit(1, Mahogany);
	Path -> setExit(2, Blackthorn);
	Blackthorn -> setExit(0, Path);
	
	// a vector with all my rooms
	room.push_back(NewBark);
	room.push_back(Cherrygrove);
	room.push_back(Violet);
	room.push_back(Violet);
	room.push_back(Azalea);
	room.push_back(Goldenrod);
	room.push_back(Ecruteak);
	room.push_back(Olivine);
	room.push_back(Cianwood);
	room.push_back(Mahogany);
	room.push_back(Blackthorn);
	room.push_back(Cave);
	room.push_back(Forest);
	room.push_back(Park);
	room.push_back(Islands);
	room.push_back(Safari);
	room.push_back(Mountain);
	room.push_back(Lake);
	room.push_back(Path);
	room.push_back(Falls);
	room.push_back(Plateau);
	// room.push_back(inventory);

	// next I need to add all my items
	Item zephyr;
	zephyr.name = "Zephyr Badge";
	zephyr.description = "You have defeated gym leader Falkner";
	zephyr.carried = false;
	Item hive;
	hive.name = "Hive Badge";
	hive.description = "You have defeated gym leader Bugsy";
	hive.carried = false;
	Item plain;
	plain.name = "Plain Badge";
	plain.description = "You have defeated gym leader Whitney";
	plain.carried = false;
	Item fog;
	fog.name = "Fog Badge";
	fog.description = "You have defeated gym leader Morty";
	fog.carried = false;
	Item storm;
	storm.name = "Storm Badge";
	storm.description = "You have defeated gym leader Chuck";
	storm.carried = false;
	Item mineral;
	mineral.name = "Mineral Badge";
	mineral.description = "You have defeated gym leader Jasmine";
	mineral.carried = false;
	Item glacier;
	glacier.name = "Glacier Badge";
	glacier.description = "You have defeated gym leader Pryce";
	glacier.carried = false;
	Item rising;
	rising.name = "Rising Badge";
	rising.description = "You have defeated gym leader Clair";
	rising.carried = false;
	

	// need to play the game with win conditions
	cout << "Welcome to the world of Zuul!" << endl;
	cout << "This is a text-based adventure game based on Pokemon" << endl;
	cout << "You can win by collecting all 8 badges and reaching the pokemon league" << endl;
	cout << "Enjoy your stay! - Alex Young" << endl;
	
	bool cont = true;
	while (cont) {
		
		char command[25] = "";
		
		char roomName[40];
		char items[8][40];
		//getRoomInfo(roomName, items);
		//cout << "You are at " << getRoomName() << endl;
		// need to get a room name and initialize it
	
		//for (int i = 0; i < 8; i++)
		//cout << "In this town you can get the " << item.
		
		// if no items then say nothing

		//cout << "The potential exits are ";
		
		cout << "Your commands are: GO, INVENTORY, GET, DROP, QUIT" << endl;
		
		cin.get(command, sizeof(command));
		cin.get();
		
		// if they want to go prompt for direction and change rooms
		if (strcmp(command, "GO") == 0) {
			cout << "Which direction do you want to go?" << endl;
			cin.get(command, strlen(command));
			cin.get();
			
		}
		
		// if they want to open inventory show items
		if (strcmp(command, "INVENTORY") == 0) {

		}
		
		// if they want to get prompt for item and move it to inventory
		if (strcmp(command, "GET") == 0) {

		}
		
		// if they want to drop prompt for item and move it to current room
		if (strcmp(command, "DROP") == 0) {

		}
		
		// if user quits they leave the game
		if (strcmp(command, "QUIT") == 0) {
			cont = false;
		}
	}

	return 0;
}

// I will need a function to create items and stuffs
