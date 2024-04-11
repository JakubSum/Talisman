#ifndef GRACLR_H
#define GRACLR_H

#include <iostream>
#include "Gra.H"

using namespace std;

class GraCLR : public Gra
{
	private:
		GraCLR(const GraCLR& rb);
		GraCLR& operator = (const GraCLR &rb);
	public:
		GraCLR();
		virtual ~GraCLR();
		virtual void View();
	};


#endif
