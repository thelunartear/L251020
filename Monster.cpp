#include "Monster.h"
#include "Engine.h"
#include "Actor.h"
#include "World.h"
#include <vector>
#include <cstdlib>
#include <ctime>

AMonster::AMonster()
{
	ZOrder = 1001;
	bIsCollision = true;
	bIsOverlap = false;
}

AMonster::~AMonster()
{
}

void AMonster::Tick()
{
	int KeyCode = rand() % 4;

	FVector2D SaveLocation = Location;

	if (KeyCode == 0)
	{
		Location.Y--;
	}
	if (KeyCode == 1)
	{
		Location.Y++;
	}
	if (KeyCode == 2)
	{
		Location.X--;
	}
	if (KeyCode == 3)
	{
		Location.X++;
	}

	std::vector<AActor*> AllActors;
	GEngine->GetWorld()->GetAllActors(AllActors);

	bool bFlag = false;

	for (auto OtherActor : AllActors)
	{
		if (CheckCollsion(OtherActor))
		{
			bFlag = true;
			break;
		}
	}

	if (bFlag)
	{
		Location = SaveLocation;
	}
}