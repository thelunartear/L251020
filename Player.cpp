#include "Player.h"
#include <iostream>

APlayer::APlayer()
{
	std::cout << "Player ������" << std::endl;
}

APlayer::~APlayer()
{
	// std::cout << "Player �Ҹ���" << std::endl;
}

void APlayer::Tick()
{
	AActor::Tick();
	std::cout << "Player Tick" << std::endl;
}
