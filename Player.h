#pragma once

#include "Actor.h"

class APlayer : public AActor
{
public:
	APlayer();
	virtual ~APlayer();

	virtual void Tick() override; //�̰� �θ����� �ִ°ǵ� ������ ��, �� �ڽĵ� ������ ����

	//overloading
	//name mangling
	void Jump(void)
	{

	}
	
	void Jump(int a)
	{

	}

	void Jump(float b)
	{

	}
};

