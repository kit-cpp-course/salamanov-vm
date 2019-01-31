#include "Decode.h"
using namespace std;

void Decode::decode() {
	//�������� ��� ����� �� ������������
	cout << "������� �������� �����, ������� �� ������ ������������";
	string nameF;
	getline(cin, nameF);
	cout << "������� �������� �����, ������� �������� ����";
	string nameK;
	getline(cin, nameK);
	//��������� ������ �� �����
	const int str = 256;
	int n;
	int l;
	f_input in(nameF);
	unsigned char** text = in.readT(&n);
	unsigned char* key = in.readKey(nameK,&l);
	
	
	//������� ����������
	unsigned char**res;
	CBlowFish enc;
	enc.Initialize(key, l);
	for (int i = 0;i < n;i++) {
		enc.Decode(text[i], res[i], n);
	}
	//��������� ����������
	cout << "������� �������� �����, � ������� �� ������ ��������� ���������";
	string resF;
	getline(cin, resF);	
	f_output out(resF);
	out.write(res, n, str);
	//����������� ������������ ������
	enc.~CBlowFish;
	delete text;
	delete res;
	delete key;
}