#ifndef Helper_H
#define Helper_H

#include <iostream>
#include <string>
//#include "Silnik.h"

using namespace std;

class Helper
{
private:
	Helper(const Helper& rb);
	Helper& operator = (const Helper &rb);
public:
	Helper();
	virtual ~Helper();
	virtual void text1() = 0;
	virtual void text2(int x) = 0;
	virtual void text3() = 0;
	virtual void text4(string x, int y) = 0;
	virtual void text5(string x, int y) = 0;
	virtual void text6(string x, string y) = 0;
	virtual void text7(int x) = 0;
	virtual void text8(int x) = 0;
	virtual void text9() = 0;
	virtual void text10() = 0;
	virtual void text11() = 0;
	virtual void text12() = 0;
	virtual void text13() = 0;
	virtual void text14(int x, int y) = 0;
	virtual void text15() = 0;
	virtual void text16(int x, string y) = 0;
	virtual void text17() = 0;
	virtual void text18() = 0;	
	friend class Silnik;
	friend class Tabela;
};

#endif

