#include "World.h"

UWorld::UWorld()
{
}

UWorld::~UWorld()
{
}

std::vector<AActor*> UWorld::GetAllActors() const
{
    return std::vector<AActor*>();
}

AActor* UWorld::SpawnActor(AActor* NewActor)
{
    return nullptr;
}
