#include "Encode.h"
using namespace std;
void Encode::encode() {
	//получаем им€ файла от пользовател€
	Key K;
	unsigned int l;
	int n;
	unsigned char* key=K.generateSomething(&l);
	cout << "¬ведите название файла, который вы хотите зашифровать";
	string nameF;
	getline(cin, nameF);
	//считываем данные из файла
	const int str = 256;
	
	f_input in(nameF);
	unsigned char** text=in.readT(&n);
	//процесс шифрации
	unsigned char**res;
	CBlowFish enc;
	enc.Initialize(key, l);
	for (int i = 0;i < n;i++) {
		enc.Encode(text[i], res[i], n);
	}
	//выведение результата
	cout << "¬ведите название файла, в который вы хотите сохранить результат";
	string resF;
	getline(cin, resF);
	
	cout << "¬ведите название файла, в который вы хотите сохранить пароль";
	string resK;
	getline(cin, resK);
	f_output out(resF);
	out.write(res, n, str);	
	out.writeKey(key,resK);
	//освобождаем динамическую пам€ть
	K.~Key;
	enc.~CBlowFish;
	delete res;
	delete key;
	delete text;
}
