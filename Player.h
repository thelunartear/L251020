#pragma once
#include "Actor.h"

class APlayer : public AActor
{
public:
    APlayer();
    virtual ~APlayer();
    
    virtual void Tick() override;   // �θ����� �ִ°� ������ ��, �� �ڽĵ� ������ ����

    // �������̵�
    void Jump();
    void Jump(int a);
    void Jump(float b);
};