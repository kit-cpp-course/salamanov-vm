#pragma once
#include "abstractKey.h"
// ����� "�����������" �������
class abstractFactory
{
public:
	virtual generate* createKey() = 0;
	virtual ~abstractFactory(){}
};