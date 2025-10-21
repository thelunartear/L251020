#pragma once
#include "Vector.h"

class AActor
{
public:
	AActor();
	virtual ~AActor();

	// virtual function table
	// override
	// 자식이 재정의 할 수도 있음
	virtual void Tick();
	virtual void Render();

	__forceinline FVector2D GetActorLocation() const
	{
		return Location;
	}

	void SetActorLocation(FVector2D Value)
	{
		Location.X = Value.X;
		Location.Y = Value.Y;
	}

	__forceinline char GetShape()
	{
		return Shape;
	}

	void SetShape(char Value)
	{
		Shape = Value;
	}

	__forceinline int GetZOrder() const
	{
		return ZOrder;
	}

protected:
	FVector2D Location;
	char Shape;
	int ZOrder;
};