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

// ���丮 ����(������ �� �Լ��� ��)
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
		// runtime �ÿ� ������
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