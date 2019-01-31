#pragma once
//класс описывающий генерацию каких-либо буквенно-символьных выражений
class generate
{
public:
	virtual unsigned char* generateSomething(unsigned int *len) = 0;
	virtual ~generate(){}
};