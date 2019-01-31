#include "Encode.h"
#include "Decode.h"
using namespace std;
int main() {
	bool choice;	
	cout << "Введите 1,если хотите зашифровать или 0 если расшифровать" << endl;	
	cin >> choice;
	bool choice;
	if (choice) {
		Encode res;
		res.encode();
	}
	else {
		Decode result;
		result.decode();
	}
	
	
	
}