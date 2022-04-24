#include "ObjekFactory.h"
#include "GameManager.h"

int main()
{
	ObjekFactory factory;
	GameManager manager;
	cout << "Generating Objects..." << endl;
	manager.generateObjek();
	cout << "Displaying Objects..." << endl;
	manager.printArray();
	manager.printUkuranVector();

	int opt = 0;
	while (opt != 99)
	{
		cout << endl;
		cout << "1. Use Object" << endl;
		cout << "2. Display All Objects" << endl;
		cout << "3. List of Object Created On Vector" << endl;
		cout << "99. exit" << endl;
		cout << "[] : "; cin >> opt;

		switch (opt)
		{
		case 1:
			manager.useObjek();
			break;
		case 2:
			manager.printArray();
			break;
		case 3:
			manager.printUkuranVector();
			break;
		}
	}
}