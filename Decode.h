#pragma once
#include "AbstractEncodeOrDecode.h"
#include "FileInput.h"
#include "FileOutput.h"
#include "Libr.h"
#include "blowfish.h"
using namespace std;
//�����, � ������� ��������������� ������ ���� ������� �����������
class Decode :public AbstractDecode {
public:
	void decode();	
};