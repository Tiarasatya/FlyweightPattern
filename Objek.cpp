#include "Objek.h"

void Objek::setType(string type)
{
	this->type = type;
	if (type == "circle")
	{
		size[0].type = "radius";
		size[1].type = "radius";
	}
	else if (type == "rectangle")
	{
		size[0].type = "length";
		size[1].type = "width";
	}
	else if(type == "triangle")
	{
		size[0].type = "base";
		size[0].type = "height";
	}
}

string Objek::getType()
{
	return type;
}

void Objek::draw()
{
	cout << "Draw [ "
		<< type << ", "
		<< size[0].type << " = " << size[0].type
		<< ", "
		<< size[1].type << " = " << size[1].type
		<< " - at Coordinate " << coord
		<< " ]"
		<< " is ";
	if (this->getBool())
	{
		cout << "enabled";
	}
	else
	{
		cout << "disabled";
	}
	cout << endl;
}

void Objek::use()
{
	status = true;
}

void Objek::setUkuran(int x, int y)
{
	size[0].size = x;
	size[1].size = y;
}

Ukuran* Objek::getUkuran()
{
	return size;
}

void Objek::setBool(bool y)
{
	status = y;
}

bool Objek::getBool()
{
	return status;
}

void Objek::setCoord(int x)
{
	coord = x;
}

int Objek::getCoord()
{
	return coord;
}