#include "Actor.h"
#include <iostream>
#include <Windows.h>

AActor::AActor() :
	Shape(' '),  Location(0, 0)
{
}

AActor::~AActor()
{
}

void AActor::Tick()
{
}

void AActor::Render()
{
	COORD Posistion;
	Posistion.X = Location.X;
	Posistion.Y = Location.Y;

	SetConsoleCursorPosition((HANDLE)GetStdHandle(STD_OUTPUT_HANDLE), Posistion);
	std::cout << Shape;
}
