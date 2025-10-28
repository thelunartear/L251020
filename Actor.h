#pragma once

#include "Vector.h"
#include "SDL3/SDL.h"

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

	__forceinline int GetZOrder() const
	{
		return ZOrder;
	}

	//virtual void SimulatePhysics();
	bool CheckCollsion(const AActor* Other);


	virtual void ActorBeginOverlap();
	virtual void Hit();


protected:
	FVector2D Location;
	char Shape;
	int ZOrder;

public:
	bool bIsCollision = false; 
	bool bIsOverlap = true;

	SDL_Color Color = { 255, 255, 255, 255 };

};

