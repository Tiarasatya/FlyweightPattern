#pragma once
#include <iostream>
#include "Objek.h"
#include<vector>

class ObjekFactory
{
public:
	vector<Objek> listOf;
	Objek* getObjek(string type);
};

