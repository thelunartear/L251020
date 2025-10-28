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
#include "GameMode.h"
#include "Timer.h"
#include "Input.h"


//FEngine* GEngine = nullptr;

FEngine* FEngine::Instance = nullptr;

FEngine::FEngine()
{
}

FEngine::~FEngine()
{
}

void FEngine::Init()
{
}

void FEngine::Run()
{
}

void FEngine::Term()
{
}

void FEngine::OpenLevel()
{
}

void FEngine::Input()
{

}

void FEngine::Tick()
{

}

void FEngine::Render()
{

}

double FEngine::GetWorldDeltaSeconds() const
{
	return  0.f/*Timer->DeltaSeconds*/;
}
