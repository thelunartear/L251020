#pragma once
#include "Vector.h"

class AActor
{
public:
	AActor();
	virtual ~AActor();

	// virtual function table -> vftbl
	virtual void Tick();	// 이건 자식이 재정의 할 수도 있다
	FVector2D GetActorLocation();
	void SetActorLocation(FVector2D Value);

private:
	FVector2D Location;
};

