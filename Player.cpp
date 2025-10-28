#include "Player.h"
#include "Engine.h"
#include "World.h"
#include "SDL3/SDL.h"
#include "PaperFilpbookComponent.h"

#include <iostream>

APlayer::APlayer()
{
	bIsCollision = true;
	bIsOverlap = true;
}

APlayer::~APlayer()
{
}

void APlayer::Tick()
{

}
