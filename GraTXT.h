#ifndef GRATXT_H
#define GRATXT_H

#include <iostream>
#include "Gra.H"

using namespace std;

class GraTXT : public Gra
{
	private:
		GraTXT(const GraTXT& rb);
		GraTXT& operator = (const GraTXT &rb);
	public:
		GraTXT();
		virtual ~GraTXT();
		virtual void View();	
	};


#endif
