#include <iostream>
#include <vector>
#include <fstream>
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

	if (in.is_open())
	{
		// ��ġ �����ڸ� ���� ������ �ű�
		in.seekg(0, ios::end);

		// �� ��ġ �б�(������ ũ��)
		int size_in = in.tellg();

		// �� ũ���� ���ڿ��� �Ҵ���
		s.resize(size_in);

		// ��ġ �����ڸ� �ٽ� ���� �� ������ �ű�
		in.seekg(0, ios::beg);

		// ���� ��ü ������ �о ���ڿ��� ����
		in.read(&s[0], size_in);
		cout << s << endl;
	}
	else
	{
		cout << "Can't find the file." << endl;
	}

	return 0;
}