#include<iostream>
//for time
#include<ctime>
#include<cstdlib>
//for console color
#include<windows.h>
using namespace std;
int main()
{
	//for console color
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,2);
	//1=blue 2=green 3=cyan 4=red 5=purple 6yellow 7=defualt white
	//8=gray 9=l-blue 10=l-green 11=l-cyan 12=l-red 13=pink 14=l-yellow
	//15=l-white
	int max=3,rng,i;
	//use time as rng seed
	srand (time(0));
	//unfinish binary loop
	for(i=1;i>0;i++)
	{	
		rng=(rand()%max)+1;
	//1=1 2=0 other=blank
		switch(rng){
			case 1: cout<<"1";break;
			case 2: cout<<"0";break;
			default: cout<<" ";break;
		}
	}
	return 0;
}
