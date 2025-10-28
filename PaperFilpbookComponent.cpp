#include "PaperFilpbookComponent.h"
#include "Vector.h"
#include <Windows.h>
#include "Actor.h"
#include <iostream>
#include "Engine.h"

UPaperFilpbookComponent::UPaperFilpbookComponent()
{
}

UPaperFilpbookComponent::~UPaperFilpbookComponent()
{
}

void UPaperFilpbookComponent::Tick()
{
}

void UPaperFilpbookComponent::Render()
{
	SDL_SetRenderDrawColor(GEngine->MyRenderer, Color.r, Color.g, Color.b, Color.a);
	int SizeX = 30;
	int SizeY = 30;

	SDL_FRect DrawRect =
	{
		(float)(GetOwner()->GetActorLocation().X * SizeX),
		(float)(GetOwner()->GetActorLocation().Y * SizeY),
		(float)SizeX,
		(float)SizeY
	};
	SDL_RenderFillRect(GEngine->MyRenderer, &DrawRect);
}