#pragma once
#include "AbstractEncodeOrDecode.h"
#include "Libr.h"
#include "Key.h"
#include "blowfish.h"
#include "FileInput.h"
#include "FileOutput.h"
using namespace std;
//класс, в котором последовательно собран весь процесс зашифровки
class Encode :public AbstractEncode {
public:	
	void encode();
};