#ifndef KLAWIATURA_H
#define KLAWIATURA_H

#include <string>

using namespace std;

class Klawiatura
{
private:
	Klawiatura(const Klawiatura& rb);
	Klawiatura& operator = (const Klawiatura &rb);
public:
	Klawiatura();
	virtual ~Klawiatura();
	virtual int Input_Int();
	virtual string Input_Char();
	friend class Silnik;
};

#endif

