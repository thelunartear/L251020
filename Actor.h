#pragma once
#include "Vector.h"

class AActor
{
public:
	AActor();
	virtual ~AActor();

	// virtual function table -> vftbl
	virtual void Tick();	// �̰� �ڽ��� ������ �� ���� �ִ�
	FVector2D GetActorLocation();
	void SetActorLocation(FVector2D Value);

private:
	FVector2D Location;
};

