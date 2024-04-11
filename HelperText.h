#ifndef HELPERTEXT_H
#define HELPERTEXT_H

#include <iostream>
#include <string>
#include "Helper.h"

using namespace std;

class HelperText : public Helper
{
	private:
		HelperText(const HelperText& rb);
		HelperText& operator = (const HelperText &rb);
	public:
		HelperText();
		virtual ~HelperText();
		virtual void text1();
		virtual void text2(int x);
		virtual void text3();
		virtual void text4(string x, int y);
		virtual void text5(string x, int y);
		virtual void text6(string x, string y);
		virtual void text7(int x);
		virtual void text8(int x);
		virtual void text9();
		virtual void text10();
		virtual void text11();
		virtual void text12();
		virtual void text13();
		virtual void text14(int x, int y);
		virtual void text15();
		virtual void text16(int x, string y);
		virtual void text17();
		virtual void text18();
		friend class Silnik;
};


#endif
