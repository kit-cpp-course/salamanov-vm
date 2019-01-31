#include "Encode.h"
using namespace std;
void Encode::encode() {
	//�������� ��� ����� �� ������������
	Key K;
	unsigned int l;
	int n;
	unsigned char* key=K.generateSomething(&l);
	cout << "������� �������� �����, ������� �� ������ �����������";
	string nameF;
	getline(cin, nameF);
	//��������� ������ �� �����
	const int str = 256;
	
	f_input in(nameF);
	unsigned char** text=in.readT(&n);
	//������� ��������
	unsigned char**res;
	CBlowFish enc;
	enc.Initialize(key, l);
	for (int i = 0;i < n;i++) {
		enc.Encode(text[i], res[i], n);
	}
	//��������� ����������
	cout << "������� �������� �����, � ������� �� ������ ��������� ���������";
	string resF;
	getline(cin, resF);
	
	cout << "������� �������� �����, � ������� �� ������ ��������� ������";
	string resK;
	getline(cin, resK);
	f_output out(resF);
	out.write(res, n, str);	
	out.writeKey(key,resK);
	//����������� ������������ ������
	K.~Key;
	enc.~CBlowFish;
	delete res;
	delete key;
	delete text;
}
