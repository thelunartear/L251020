#pragma once
#include "Vector.h"
#include <vector>

class AActor
{
public:
	AActor();
	virtual ~AActor();

	// virtual function table -> vftbl
	// override
	virtual void Tick();	// 이건 자식이 재정의할수도 있음

	__forceinline FVector2D GetActorLocation() const
	{
		return Location;
	}

	void SetActorLocation(FVector2D Value)
	{
		Location.X = Value.X;
		Location.Y = Value.Y;
	}

	bool CheckCollision(const AActor* Other);

	virtual void ActorBeginOverlap();
	virtual void Hit();

protected:
	FVector2D Location;

public:
	bool bIsCollision = false;
	bool bIsOverlap = true;
};