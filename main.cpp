#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Engine.h"
#include "Actor.h"
#include "Player.h"
using namespace std;

int main()
{
	/*FEngine* MyEngine = new FEngine();
	MyEngine->Init();
	MyEngine->Run();
	MyEngine->Term();

	delete MyEngine;
	MyEngine = nullptr;*/
	ifstream in("Level01.map");
	string s;

	if (!in.is_open())
	{
		cout << "Can't find the file." << endl;
		return 0;
	}

	while (getline(in, s))
	{
		cout << s << endl;
	}

	return 0;
}