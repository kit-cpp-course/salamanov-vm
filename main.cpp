#include "Encode.h"
#include "Decode.h"
using namespace std;
int main() {
	bool choice;	
	cout << "������� 1,���� ������ ����������� ��� 0 ���� ������������" << endl;	
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