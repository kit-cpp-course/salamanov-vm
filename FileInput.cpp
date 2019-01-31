#include "Libr.h";
#include "FileInput.h";
using namespace std;
 unsigned char** f_input::readT(int *n) {
	const int MAXLEN_STR = 256;    //Максимальная длина строки	
	unsigned char *S[MAXLEN_STR];   //Массив указателей на строки
	int count_n = 0;      //счётчик переносов строк

	{		
		char ch = 0;
		ifstream in(nameF);
		while ((ch = in.get()) != EOF) {
			if ('\n' == ch) count_n++;
		}
		in.close();		
	}
	int i = 0;	
	for (i = 0; i < count_n + 1; i++) S[i] = new unsigned char[MAXLEN_STR]; 

	int str_num = 0;       
	ifstream in(nameF);
	while (!in.eof()) {                            
		in.getline(S[str_num++], MAXLEN_STR);    
	}
	*n = count_n + 1;
	return S;
}
unsigned char* f_input::readKey(string nameK,int *m) {
	ifstream file(nameK);
	if (file) {
		string line;
		while (file.good()) {
			getline(file, line);
			
		}
		 char *res = new  char[line.length() + 1];
		strcpy(res, line.c_str());
		*m = line.length() + 1;
		return (unsigned char*)res;

	}
	
}