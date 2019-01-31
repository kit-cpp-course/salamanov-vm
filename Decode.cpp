#include "Decode.h"
using namespace std;

void Decode::decode() {
	//получаем им€ файла от пользовател€
	cout << "¬ведите название файла, который вы хотите расшифровать";
	string nameF;
	getline(cin, nameF);
	cout << "¬ведите название файла, который содержит ключ";
	string nameK;
	getline(cin, nameK);
	//считываем данные из файла
	const int str = 256;
	int n;
	int l;
	f_input in(nameF);
	unsigned char** text = in.readT(&n);
	unsigned char* key = in.readKey(nameK,&l);
	
	
	//процесс дешифрации
	unsigned char**res;
	CBlowFish enc;
	enc.Initialize(key, l);
	for (int i = 0;i < n;i++) {
		enc.Decode(text[i], res[i], n);
	}
	//выведение результата
	cout << "¬ведите название файла, в который вы хотите сохранить результат";
	string resF;
	getline(cin, resF);	
	f_output out(resF);
	out.write(res, n, str);
	//освобождаем динамическую пам€ть
	enc.~CBlowFish;
	delete text;
	delete res;
	delete key;
}