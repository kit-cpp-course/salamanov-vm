#pragma once
#include "abstractKey.h"
//�����, ����������� ��������� �����
class Key:public generate {
public:
	
	unsigned char* generateSomething(unsigned int *Len);
	unsigned int createLength();
	~Key();
private:
	void numOfChars();
	
	
	unsigned int Len;
	int numOfSmallChars;
	int numOfBigChars;
	int numOfNumbers;
	char * key;
};