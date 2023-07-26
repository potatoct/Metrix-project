#include<iostream>
#include<ctime>
#include<cstdlib>
#include<windows.h>

using namespace std;
HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);

void g() {SetConsoleTextAttribute(h,2);}//green
void r() {SetConsoleTextAttribute(h,4);}//red

int main()
{
	int max=70, rng;
	srand (time(0));
	for(;;)
	{	
		rng=(rand()%max)+1;
		if (rng<=46) g();
		else r();
		switch(rng){
			case  1: cout<<"ア";break;
			case  2: cout<<"イ";break;
			case  3: cout<<"ウ";break;
			case  4: cout<<"エ";break;
			case  5: cout<<"オ";break;
			case  6: cout<<"カ";break;
			case  7: cout<<"キ";break;
			case  8: cout<<"ク";break;
			case  9: cout<<"ケ";break;
			case 10: cout<<"コ";break;
			case 11: cout<<"サ";break;
			case 12: cout<<"シ";break;
			case 13: cout<<"ス";break;
			case 14: cout<<"セ";break;
			case 15: cout<<"ソ";break;
			case 16: cout<<"タ";break;
			case 17: cout<<"チ";break;
			case 18: cout<<"ツ";break;
			case 19: cout<<"テ";break;
			case 20: cout<<"ト";break;
			case 21: cout<<"ナ";break;
			case 22: cout<<"ニ";break;
			case 23: cout<<"ヌ";break;
			case 24: cout<<"ネ";break;
			case 25: cout<<"ノ";break;
			case 26: cout<<"ハ";break;
			case 27: cout<<"ヒ";break;
			case 28: cout<<"フ";break;
			case 29: cout<<"ヘ";break;
			case 30: cout<<"ホ";break;
			case 31: cout<<"マ";break;
			case 32: cout<<"ミ";break;
			case 33: cout<<"ム";break;
			case 34: cout<<"メ";break;
			case 35: cout<<"モ";break;
			case 36: cout<<"ヤ";break;
			case 37: cout<<"ユ";break;
			case 38: cout<<"ヨ";break;
			case 39: cout<<"ラ";break;
			case 40: cout<<"リ";break;
			case 41: cout<<"ル";break;
			case 42: cout<<"レ";break;
			case 43: cout<<"ロ";break;
			case 44: cout<<"ワ";break;
			case 45: cout<<"ヲ";break;
			case 46: cout<<"ン";break;
			case 47: cout<<"M"  ;break;
			case 48: cout<<"E"  ;break;
			case 49: cout<<"T"  ;break;
			case 50: cout<<"R"  ;break;
			case 51: cout<<"I"  ;break;
			case 52: cout<<"X"  ;break;
			default: cout<<" "  ;break;
		}
	}
	return 0;
}
