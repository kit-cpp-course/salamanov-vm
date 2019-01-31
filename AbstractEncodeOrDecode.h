#pragma once
//данные два класса представл€ют собой обобщенный вид дл€ любого шифрование, где имеетс€ функци€
//шифрации/дешифрации 
class AbstractEncode
{
public:	
	virtual void encode() = 0;
};
class AbstractDecode {
public:
	virtual void decode() = 0;
};