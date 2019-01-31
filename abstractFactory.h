#pragma once
#include "abstractKey.h"
// класс "абстрактной" фабрики
class abstractFactory
{
public:
	virtual generate* createKey() = 0;
	virtual ~abstractFactory(){}
};