#pragma once
#include "Libr.h"
//����� ��� ���������� ������ � ��������� �����
class f_input {
	std::string nameF;

public:
	f_input(std::string nameF) : nameF(nameF) {}
	unsigned char** readT(int *n);
	unsigned char* readKey(std::string nameK,int *m);
};