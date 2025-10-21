#include "DynamicArray.h"

TDynamicArray::TDynamicArray()
{
}

TDynamicArray::~TDynamicArray()
{
}

void TDynamicArray::PushBack(int Value)
{
	if (Index < Capacity)
	{
		Data[Index] = Value;
		Index++;
		Size++;
	}
	else
	{
		if (Capacity == 0)
		{
			Capacity = 1;
		}
		int* NewArray = new int[Capacity * 2];

		for (int i = 0; i < Size; i++)
		{
			NewArray[i] = Data[i];
		}
		// 배열 사이즈 늘리기

		delete[] Data;
		Data = NewArray;
		Capacity = Capacity * 2;
		Size++;

		Data[Index] = Value;
		Index++;
	}
}
