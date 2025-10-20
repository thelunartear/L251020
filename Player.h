#pragma once
#include "Actor.h"

class APlayer : public AActor
{
public:
    APlayer();
    virtual ~APlayer();
    
    virtual void Tick() override;   // 부모한테 있는거 재정의 함, 내 자식도 재정의 가능

    // 오버라이딩
    void Jump();
    void Jump(int a);
    void Jump(float b);
};