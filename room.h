/*
 * Header file for rooms
 * Alex Young
 */

#include <iostream>
#include <vector>
#include <map>
#include <cstring>

using namespace std;

class Room {
	public:
		// constructor
		Room(char *, char *);
		// i need to initialize my room and stuff
		void setInit();
		// setting a exit to a room needs a direction and another room to exit to
		void setExit(int direction, Room *exit);
		
		// these won't change the room object
		const char *getName() const;
		const char *getInfo() const;
	private:
		// change pointer not original
		const char *name;
		const char *info;
		
};
