#include "ObjekFactory.h"

Objek* ObjekFactory::getObjek(string type)
{
	Objek* returnObjek = new Objek;

	struct objekType
	{
		objekType(string const& n) : type(n) {}
		bool operator () (Objek& p) { return p.getType() == type; }
	private:
		string type;
	};

	vector<Objek>::iterator it = find_if(listOf.begin(), listOf.end(), objekType(type));

	if (it != listOf.end())
	{
		*returnObjek = *it;
	}
	else
	{
		Objek* temp;
		temp = new Objek();
		temp->setType(type);
		listOf.push_back(*temp);
		returnObjek = temp;
	}
	return returnObjek;
}