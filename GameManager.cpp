#include "GameManager.h"

void GameManager::generateObjek()
{
	srand(time(0));

	for (int i = 0; i < 9; i++)
	{
		array[i] = *factory.getObjek(randomType(0 + rand() % 3));
		array[i].setCoord(i);
		array[i].setUkuran(rand(), rand());
	}
}

void GameManager::useObjek()
{
	int i;
	cout << "Masukkan koordinat" << endl;
	cin >> i;
	array[i].use();
	cout << endl;
	cout << "type objek  " << array[i].getType() << " di " << i << " sedang digunakan";
}

void GameManager::printUkuranVector()
{
	cout << "type objek yang dibuat : ";
	for (auto i = factory.listOf.begin(); i != factory.listOf.end(); i++)
	{
		cout << i->getType() << ", ";
	}
	cout << "Ukuran vektor : " << factory.listOf.size() << endl;
}

string GameManager::randomType(int index)
{
	return type[index];
}