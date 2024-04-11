#include "Klawiatura.h"
#include <iostream>
#include <conio.h>

Klawiatura::Klawiatura() {
};

Klawiatura::~Klawiatura() {
};


int Klawiatura::Input_Int(){
	int x;
	x = getch() - '0';
	return x;
};

std::string Klawiatura::Input_Char() {
    char y;
    y=getch();
    std::string result(1, y);
    return result;
};


