#include "Key.h"
#include "Libr.h"
using namespace std;

unsigned int Key::createLength() {
	srand(time(0));
	unsigned int length = rand() % 20+5;
	return length;
}

	unsigned char* Key::generateSomething(unsigned int *Len)
	{
		 *Len = createLength();
		unsigned char* key = new unsigned char[*Len];

		for (int i = 0; i < numOfNumbers; ++i) {
			key[i] = char(rand() % 10 + 48);
		}
		for (int i = numOfNumbers; i < numOfNumbers + numOfBigChars; ++i) {
			key[i] = char(rand() % 26 + 65);
		}
		for (int i = numOfNumbers + numOfBigChars; i < *Len; ++i) {
			key[i] = char(rand() % 26 + 97);
		}
		random_shuffle(key, key + *Len);
		return key;
	}

	void Key::numOfChars()
	{

		numOfSmallChars = rand() % Len;
		int charRandEnd = Len - numOfSmallChars;
		numOfBigChars = rand() % charRandEnd;
		numOfNumbers = Len - numOfSmallChars - numOfBigChars;
	}
	Key::~Key() {
		delete key;
	}



