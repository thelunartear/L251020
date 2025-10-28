#include "Actor.h"
#include "Engine.h"
#include "Component.h"

AActor::AActor() :
	Location(0, 0)
{
}

AActor::~AActor()
{
}

void AActor::Tick()
{
}

bool AActor::CheckCollision(const AActor* OtherActor)
{
	if (OtherActor->bIsOverlap)
	{
		return false;
	}

	if (this != OtherActor && OtherActor->bIsCollision && bIsCollision &&
		this->Location == OtherActor->Location)// ���� ���
	{
		return true;
	}
	return false;
}

void AActor::ActorBeginOverlap()
{
}

void AActor::Hit()
{
}
