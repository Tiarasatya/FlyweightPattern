
#include<iostream>
using namespace std;

struct Ukuran 
{
	string type;
	int size = 0;
};

class Objek
{
private : 
	string type;
	Ukuran size[2];
	int coord = 0;
	bool status = false;
public:
	void setType(string type);
	string getType();
	void draw();
	void setUkuran(int x, int y);
	Ukuran* getUkuran();
	void use();
	void setBool(bool y);
	bool getBool();
	void setCoord(int x);
	int getCoord();
};

