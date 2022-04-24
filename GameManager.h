#pragma once
#include "ObjekFactory.h"

class GameManager
{
private:
	string type[3] = { "circle","rectangle","triangle" };
	Objek array[9];
	ObjekFactory factory;
public:
	void generateObjek();
	void printArray();
	void printUkuranVector();
	string randomType(int index);
	void useObjek();
};


