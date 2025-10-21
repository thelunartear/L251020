#pragma once
#include "Actor.h"

class APlayer : public AActor
{
public:
	APlayer();
	virtual ~APlayer();

	virtual void Tick() override; // 부모의 것 재정의 함, 내 자식도 재정의 가능

	// overloading
	// name mangling

	void Jump(void) {}
	void Jump(int a) {}
	void Jump(float b) {}
};