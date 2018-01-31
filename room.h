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
		Room(char *name, char *info);
		// setting a exit to a room needs a direction and another room to exit to
		void setExit(int direction, const Room *exit);
		const Room *getExit(int direction) const;
		// these won't change the room object
		const char *getName() const;
		const char *getInfo() const;
	private:
		// change pointer not original
		const char *name;
		const char *info;
		const Room *exits[4];
		
};
