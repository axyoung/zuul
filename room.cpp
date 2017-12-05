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
}

void Room::setExit(int direction, Room *exit) {

}

void Room::setInit() {

}

const char *Room::getName() const {
	return name;
}

const char *Room::getInfo() const {
	return info;
}


