#pragma once
//������ ��� ������ ������������ ����� ���������� ��� ��� ������ ����������, ��� ������� �������
//��������/���������� 
class AbstractEncode
{
public:	
	virtual void encode() = 0;
};
class AbstractDecode {
public:
	virtual void decode() = 0;
};