#pragma once

class AActor;

// 추상 클래스
class IInterface
{
public:
	virtual void Tick() = 0;
};

class UComponent
{
public:
	UComponent();
	virtual ~UComponent();

	virtual void Tick() = 0;

	AActor* GetOwner() const;
	void SetOwner(AActor* InOwner);

protected:
	AActor* Owner;
};