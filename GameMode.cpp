#include "GameMode.h"
#include <vector>
#include "Engine.h"
#include "World.h"
#include "Player.h"
#include "Monster.h"
#include "Goal.h"



AGameMode::AGameMode()
{
	bIsCollision = false;
	bIsOverlap = false;
}

AGameMode::~AGameMode()
{
}

void AGameMode::Tick()
{
	AActor* Player = nullptr;
	std::vector<AActor*> AllActors;
	GEngine->GetWorld()->GetAllActors(AllActors);
	for (auto Actor : AllActors)
	{
		if (dynamic_cast<APlayer*>(Actor))
		{
			Player = dynamic_cast<APlayer*>(Actor);
			break;
		}
	}

	for (auto Actor : AllActors)
	{
		if (dynamic_cast<AMonster*>(Actor))
		{
			if (Player->GetActorLocation() == Actor->GetActorLocation())
			{
				//game over
				//exit(-1);
				break;
			}
		}
	}

	for (auto Actor : AllActors)
	{
		if (dynamic_cast<AGoal*>(Actor))
		{
			if (Player->GetActorLocation() == Actor->GetActorLocation())
			{
				//complete
				//exit(-1);
				break;
			}
		}
	}


	SDL_Log("deltaSeconds : %f", GEngine->GetWorldDeltaSeconds());

	//if (Player == Monster)
	//{
	//	over
	//}

	//if (Player == Goal)
	//{
	//	complete
	//}
}

void AGameMode::Render()
{

}
