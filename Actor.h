#pragma once

#include "Vector.h"

//2d 

class AActor
{
public:
	AActor();
	virtual ~AActor();

	//virtual function table ->vftbl
	//override
	virtual void Tick(); //�̰� �ڽ��� ������ �Ҽ��� �ִ�.
	virtual void Render();


	__forceinline FVector2D GetActorLocation() const
	{
		return Location;
	}

	void SetActorLocation(FVector2D Value)
	{
		//Location = Value;
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


protected:
	FVector2D Location;
	char Shape;
};

