#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
	int max=3,rng,i;
	srand (time(0));
	for(i=1;i>0;i++)
	{	
		rng=(rand()%max)+1;
		switch(rng){
			case 1: cout<<"1";break;
			case 2: cout<<"0";break;
			default: cout<<" ";break;
		}
	}
	return 0;
}
