#pragma once
#include <vector>

class AActor;	// 전방 선언

class UWorld
{
public:
	UWorld();
	virtual ~UWorld();

	std::vector<AActor*> GetAllActors() const;
	AActor* SpawnActor(AActor* NewActor);

protected:
	std::vector<AActor*> Actors;
};