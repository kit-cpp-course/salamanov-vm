#pragma once
//����� ����������� ��������� �����-���� ��������-���������� ���������
class generate
{
public:
	virtual unsigned char* generateSomething(unsigned int *len) = 0;
	virtual ~generate(){}
};