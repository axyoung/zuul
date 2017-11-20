/*
 * Header file for rooms
 * Alex Young
 */

#include <iostream>
#include <vector>
#include <map>
#include <cstring>

using namespace std;

class room {
	public:
		room(char *, char *);
		char *getName();
		char *getInfo();
		char *name;
		char *info;
		
		// setting a exit to a room needs a direction and another room to exit to
		void setExit(int direction, room *exit)
};
