#include "Actor.h"
#include <iostream>

AActor::AActor()
{
	std::cout << "AActor ������" << std::endl;
}

AActor::~AActor()
{
	// std::cout << "AActor �Ҹ���" << std::endl;
}

void AActor::Tick()
{
	std::cout << "AActor Tick" << std::endl;
}

FVector2D AActor::GetActorLocation()
{
	Location.X++;
	return Location;
}

void AActor::SetActorLocation(FVector2D Value)
{
	Location.X = Value.X;
	Location.Y = Value.Y;
}