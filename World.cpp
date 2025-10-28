#include "World.h"
#include "Actor.h"
#include "SceneComponent.h"
#include "PaperFilpbookComponent.h"
#include <algorithm>

UWorld::UWorld()
{
}

UWorld::~UWorld()
{
}

void UWorld::GetAllActors(std::vector<AActor*>& OutActors) const
{
	OutActors = Actors;
}

// 팩토리 패턴(생성도 이 함수가 함)
AActor* UWorld::SpawnActor(AActor* NewActor)
{
	Actors.push_back(NewActor);
	
	return NewActor;
}

void UWorld::Tick()
{
	// All Actors Process
	for (auto Actor : Actors)
	{
		// runtime 시에 결정됨
		Actor->Tick();
	}
}

void UWorld::Render()
{
	/*for (auto Actor : Actors)
	{
		
	}*/
}

bool CompareActor(const AActor* A, const AActor* B)
{
	return false;
}

void UWorld::SortActor()
{
}