/* 
 * Class for rooms
 * Alex Young
 */

#include <iostream>
#include <cstring>
#include "room.h"

using namespace std;

Room::Room(char *Name, char *Info) {
	name = Name;
	info = Info;
	exits[0] = NULL;
	exits[1] = NULL;
	exits[2] = NULL;
	exits[3] = NULL;
}

void Room::setExit(int direction, const Room *exit) {
	exits[direction] = exit;
}

const Room *Room::getExit(int direction) const {
	return exits[direction];
}

const char *Room::getName() const {
	return name;
}

const char *Room::getInfo() const {
	return info;
}


