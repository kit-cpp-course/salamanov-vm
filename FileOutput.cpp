#include "Libr.h";
#include "FileOutput.h";
using namespace std;
 void f_output::write(unsigned char** text,int n,int m) {
	ofstream file(nameF, ios::app);
	if (file.is_open()) {
		for (int i = 0;i < n;i++) {
			for (int j = 0;j < m;j++) {
				file << text[n][m] << endl;
			}
		}		
	}
	delete text;
}
 void f_output::writeKey(unsigned char* Key,string name) {
	 ofstream file(name, ios::app);
	 if (file.is_open()) {		 			 
				 file << Key << endl;			 		 
	 }
	 delete Key;
 }
