/* Alex Young
 * C++ Galbriath P6
 * Zuul: Pokemon
 * This program will create text based adventure game.
 * Last updated: 1/30/2018 - complete
 */

#include "zuul.h"

using namespace std;

// constructor
Zuul::Zuul() {
	
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
	Mahogany -> setExit(1, Path);
	Path -> setExit(3, Mahogany);
	Path -> setExit(2, Blackthorn);
	Blackthorn -> setExit(0, Path);
	
	// a vector with all my rooms
	room.push_back(NewBark);
	room.push_back(Cherrygrove);
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
	Item *zephyr = new Item;
	zephyr->name = "Zephyr_Badge";
	zephyr->description = "You have defeated gym leader Falkner";
	zephyr->room = Violet;
	Item *hive = new Item;
	hive->name = "Hive_Badge";
	hive->description = "You have defeated gym leader Bugsy";
	hive->room = Azalea;
	Item *plain = new Item;
	plain->name = "Plain_Badge";
	plain->description = "You have defeated gym leader Whitney";
	plain->room = Goldenrod;
	Item *fog = new Item;
	fog->name = "Fog_Badge";
	fog->description = "You have defeated gym leader Morty";
	fog->room = Ecruteak;
	Item *storm = new Item;
	storm->name = "Storm_Badge";
	storm->description = "You have defeated gym leader Chuck";
	storm->room = Cianwood;
	Item *mineral = new Item;
	mineral->name = "Mineral_Badge";
	mineral->description = "You have defeated gym leader Jasmine";
	mineral->room = Olivine;
	Item *glacier = new Item;
	glacier->name = "Glacier_Badge";
	glacier->description = "You have defeated gym leader Pryce";
	glacier->room = Mahogany;
	Item *rising = new Item;
	rising->name = "Rising_Badge";
	rising->description = "You have defeated gym leader Clair";
	rising->room = Blackthorn;
	
	// here i add all my items to my inventory vector
	inventory.push_back(zephyr);
	inventory.push_back(hive);
	inventory.push_back(plain);
	inventory.push_back(fog);
	inventory.push_back(storm);
	inventory.push_back(mineral);
	inventory.push_back(glacier);
	inventory.push_back(rising);
}

// tearing down the vectors for when i quit
Zuul::~Zuul() {
	for (unsigned i = 0; i < inventory.size(); i++) {
		delete inventory[i];
		inventory[i] = NULL;
	}
	
	for (unsigned i = 0; i < room.size(); i++) {
		delete room[i];
		room[i] = NULL;
	}
}

// the actual game
void Zuul::play() {
		
	// N = 0 E = 1 S = 2 W = 3
	const char *directions[] = { "North", "East", "South", "West" };

	// introduce game and share win conditions
	cout << endl << "Welcome to the world of Zuul!" << endl;
	cout << "This is a text-based adventure game based on Pokemon" << endl;
	cout << "You can win by collecting all 8 badges and reaching the Pokemon League" << endl;
	cout << "Enjoy your stay! - Alex Young" << endl << endl;

	// start in new bark town
	const Room *currentRoom = room[0];

	// I will keep playing until i quit or win
	bool cont = true;
	while (cont) {
		// you start each round by sharing the room
		cout << endl;
		cout << "You are in " << currentRoom->getName() << ", " << currentRoom->getInfo() << endl;
		
		// check for win condition
		int count = 0;
		// if at the plateau
		if (currentRoom == room[19]) {
			//cout << "hi" << endl;
			for (unsigned i = 0; i < inventory.size(); i++) {
				// and all the items are in your inventory
				if (NULL == inventory[i]->room) {
					if (count == 7) {
						// win!
						cout << "You got all 8 badges and reached the elite four!" << endl;
						cout << "Congratulations!!! You Won!";
						cont = false;
						return;
					}
					count++;
				}
			}
		}

		// print out items in the room
		count = 0;
		// check if items are in the same room as current room
		for (unsigned i = 0; i < inventory.size(); i++) {
			if (currentRoom == inventory[i]->room) {
				// if so, print out the name of items
				if (count == 0) {
					cout << "Items in this room are: ";
				} else {
					cout << ", ";
				}
				cout << inventory[i]->name;
				count++;
			}
		}
		// if not, say so
		if (count == 0) {
			cout << "There are no items in this room.";
		}

		cout << endl;
		
		// check if items are in your inventory
		count = 0;
		for (unsigned i = 0; i < inventory.size(); i++) {
			if (NULL == inventory[i]->room) {
				// if so, display them
				if (count == 0) {
					cout << "Items that you are carrying: ";
				} else {
					cout << ", ";
				}
				cout << inventory[i]->name;
				count++;
			}
		}
		// if not, say so
		if (count == 0) {
			cout << "You have no items.";
		}
		
		cout << endl;

		// print out all the exits to the current room
		count = 0;
		// check all 4 directions, then check if the room has an exit in that direction
		for (unsigned i = 0; i < 4; i++) {
			if (currentRoom->getExit(i)) {
				if (count == 0) {
					cout << "The exits are: ";
				} else {
					cout << ", ";
				}
				cout << directions[i];
				count++;
			}
		}
		
		if (count == 0) {
			cout << "There are no exits. My bad, Game Over.";
		}
		
		cout << endl;

		// now the user will enter commands of go, get drop and quit
		// I made the array size 40 because I was having issues with cin.get
		char command[40] = "";
		cout << "Your commands are: GO, GET, DROP, QUIT" << endl;
		
		cin >> command;
		//cin.get(command, sizeof(command));
		//cin.get();
		
		// if they want to go prompt for direction and change rooms
		// I also learned how to use strcasecmp for case insensitive comparison
		if (strcasecmp(command, "GO") == 0) {
			cout << "Which direction do you want to go?" << endl;
			cin >> command;
			//cin.get(command, strlen(command));
			//cin.get();
			for (unsigned i = 0; i < 4; i++) {
				if (currentRoom->getExit(i)) {
					if (strcasecmp(directions[i], command) == 0) {
						currentRoom = currentRoom->getExit(i);
					}
				}
			}
			
		}
		
		// if they want to get prompt for item and move it to inventory
		if (strcasecmp(command, "GET") == 0) {
			count = 0;
			for (unsigned i = 0; i < inventory.size(); i++) {
				if (currentRoom == inventory[i]->room) {
					if (count == 0) {
						cout << "Which item do you want to pick up? ";
						cin >> command;
					}

					if (strcasecmp(command, inventory[i]->name) == 0) {
						inventory[i]->room = NULL;
						cout << inventory[i]->description;
					}
					count++;
				}
			}
			
			if (count == 0) {
				cout << "There are no items to get.";
			}

			cout << endl;
			
		}
		
		// if they want to drop prompt for item and move it to current room
		if (strcasecmp(command, "DROP") == 0) {
			count = 0;
			for (unsigned i = 0; i < inventory.size(); i++) {
				if (NULL == inventory[i]->room) {
					if (count == 0) {
						cout << "Which item do you want to drop? ";
						cin >> command;
					}

					if (strcasecmp(command, inventory[i]->name) == 0) {
						inventory[i]->room = currentRoom;
					}
					count++;
				}
			}
			
			if (count == 0) {
				cout << "You have no items to drop.";
			}
			cout << endl;

		}
		
		// if user quits they leave the game
		if (strcasecmp(command, "QUIT") == 0) {
			cont = false;
		}
	}

	return;
}

// yipee
