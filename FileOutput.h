#pragma once
#include "Libr.h"
//класс для занесения результата в файл
class f_output {
	std::string nameF;
	
public:
	void writeKey(unsigned char* key, string name);
	f_output(std::string nameF) : nameF(nameF) {}
	void write(unsigned char** text,int n,int m);
	
};