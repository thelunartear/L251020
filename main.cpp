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
		// 위치 지정자를 파일 끝으로 옮김
		in.seekg(0, ios::end);

		// 그 위치 읽기(파일의 크기)
		int size_in = in.tellg();

		// 그 크기의 문자열을 할당함
		s.resize(size_in);

		// 위치 지정자를 다시 파일 맨 앞으로 옮김
		in.seekg(0, ios::beg);

		// 파일 전체 내용을 읽어서 문자열에 저장
		in.read(&s[0], size_in);
		cout << s << endl;
	}
	else
	{
		cout << "Can't find the file." << endl;
	}

	return 0;
}