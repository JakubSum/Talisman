#ifndef GRA_H
#define GRA_H

#include <iostream>
#include "Silnik.h"
//#include "HelperText.h"
#include <string>

using namespace std;

class Gra : protected Silnik
{
	private:
		Gra(const Gra& rb);
		Gra& operator = (const Gra &rb);
	public:
		Gra();
		void delay(long i);
		virtual ~Gra();
		void Play();
		virtual void View() = 0;
		//virtual int Input_Int() = 0;
		//virtual std::string Input_Char() = 0;		
};

#endif


