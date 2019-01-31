#pragma once
#include "abstractFactory.h"
#include "Key.h"
class FactoryKeys :public abstractFactory {
	generate* createKey() {
		return new Key;
	}
};