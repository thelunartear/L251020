#include "Engine.h"
#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <algorithm>

#include "World.h"
#include "Wall.h"
#include "Floor.h"
#include "Player.h"
#include "Goal.h"
#include "Monster.h"

FEngine* FEngine::Instance = nullptr;

FEngine::FEngine():
	World(nullptr)
{
}

FEngine::~FEngine()
{
}

void FEngine::Init()
{
	World = new UWorld();

	std::ifstream MapFile("Level01.map");

	if (MapFile.is_open())
	{
		char Buffer[1024] = { 0, };
		int Y = 0;
		while (MapFile.getline(Buffer, 80))
		{
			std::string Line = Buffer;
			for (int X = 0; X < Line.size(); ++X)
			{
				if (Line[X] == '*')
				{
					AActor* NewActor = new AWall();
					NewActor->SetActorLocation(FVector2D(X, Y));
					NewActor->SetShape(Line[X]);
					World->SpawnActor(NewActor);
				}
				else if (Line[X] == ' ')
				{
					AActor* NewActor = new AFloor();
					NewActor->SetActorLocation(FVector2D(X, Y));
					NewActor->SetShape(Line[X]);
					World->SpawnActor(NewActor);
				}
				else if (Line[X] == 'P')
				{
					AActor* NewActor = new APlayer();
					NewActor->SetActorLocation(FVector2D(X, Y));
					NewActor->SetShape(Line[X]);
					World->SpawnActor(NewActor);
				}
				else if (Line[X] == 'M')
				{
					AActor* NewActor = new AMonster();
					NewActor->SetActorLocation(FVector2D(X, Y));
					NewActor->SetShape(Line[X]);
					World->SpawnActor(NewActor);
				}
				else if (Line[X] == 'G')
				{
					AActor* NewActor = new AGoal();
					NewActor->SetActorLocation(FVector2D(X, Y));
					NewActor->SetShape(Line[X]);
					World->SpawnActor(NewActor);
				}
			}
			// 1. std::sort(World->GetAllActors(),)
			std::sort(World->GetAllActors().begin(), World->GetAllActors().end(),
				[](AActor* a, AActor* b) {return a->GetZOrder() < b->GetZOrder(); });
			// 2. 정렬 로직 자체 구현
			// selection sort
			// ZOrder
			Y++;
		}
	}

	MapFile.close();
}

void FEngine::Run()
{
	while (bIsRunning)
	{
		Input();
		Tick();
		Render();
	}
}

void FEngine::Term()
{
}

void FEngine::Input()
{
	int KeyCode = _getch();
}

void FEngine::Tick()
{
	GetWorld()->Tick();
}

void FEngine::Render()
{
	GetWorld()->Render();
}
