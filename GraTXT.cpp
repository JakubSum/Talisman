#include <iostream>
using namespace std;
#include "GraTXT.h"
#include <conio.h>
#include <string>

GraTXT::GraTXT() : Gra() {};

GraTXT::~GraTXT() {
};

/*
int GraTXT::Input_Int(){
	int x;
	x = getch();
	return x;
};

std::string GraTXT::Input_Char() {
    char y;
    std::cin >> y;
    std::string result(1, y);
    return result;
};
*/

void GraTXT::View(){
	int test=0;
	int j=6;
	system("cls");
	for(int i=0; i<6; i++){
		if(plansza_event[i].second.second!=0){
			if(plansza[i].second[0]=='B' || plansza[i].second[0]=='P'){
				cout<<plansza[i].second;
			}else{
			cout<<plansza_event[i].first.second;
			}
		}else {
			cout<<plansza[i].second;
		}
	}
		
		
		
	
	cout<<endl;
	for(int i=19; i>15; i--){
		if(plansza_event[i].second.second!=0){
			if(plansza[i].second[0]=='B' || plansza[i].second[0]=='P'){
				cout<<plansza[i].second;
			}else{
			cout<<plansza_event[i].first.second;
			}
		}else {
			cout<<plansza[i].second;
		}
		cout<<"    ";
		if(plansza_event[j].second.second!=0){
			if(plansza[j].second[0]=='B' || plansza[i].second[0]=='P'){
				cout<<plansza[j].second<<endl;
			}else{
			cout<<plansza_event[j].first.second<<endl;
			}
		}else {
			cout<<plansza[j].second<<endl;
		}
		j++;
		/*
		cout<<plansza[i].second<<"    "<<plansza[j].second<<endl;
		j++;
		*/
	}
	
	/*
	cout<<plansza[19].second<<"    "<<plansza[6].second<<endl;
	cout<<plansza[18].second<<"    "<<plansza[7].second<<endl;
	cout<<plansza[17].second<<"    "<<plansza[8].second<<endl;
	cout<<plansza[16].second<<"    "<<plansza[9].second<<endl;
	*/
	for(int i=15; i>9; i--){
		if(plansza_event[i].second.second!=0){
			if(plansza[i].second[0]=='B' || plansza[i].second[0]=='P'){
				cout<<plansza[i].second;
			}else{
			cout<<plansza_event[i].first.second;
			}
		}else {
			cout<<plansza[i].second;
		}
	}
	
	cout<<endl;
	cout<<endl;

	
	cout<<"Statystyki bohatera to: Sila - "<<T.STR<<"\nMoc - "<<T.POW<<"\nZycie - "<<T.HP<<endl;


	cout<<endl;
	
	
	for(int i = 0; i < 20; i++) {
    if(plansza_event[i].second.first != 0) {
        switch(plansza_event[i].second.first) {
            case 1:
                cout << plansza_event[i].first.second << " " << T.M_p[plansza_event[i].second.second - 1].second.first<<endl;
            break;
            case 2:
                cout << plansza_event[i].first.second << " " << T.M_s[plansza_event[i].second.second - 1].second.first<<endl;
			break;
            case 3:
                cout << plansza_event[i].first.second << " " << T.Ev[plansza_event[i].second.second - 1].second.first<<endl;
			break;
        }
    }
}cout<<endl;
};

