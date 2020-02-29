#include <iostream>
using namespace std;

//Egy Pitantghoras negra fajtájú hangya mászik egy papírlapon.
//A lap bal alsó csücskébõl indul és vagy jobbra vagy felfelé halad.
//Jobbra indul, és mindig irányt vált, ha az indulási ponttól való távolságnak négyzetösszege osztható hárommal vagy öttel.
//Hol lesz a hangya 50 lépés múlva ?


int main()
{
	int x = 0, y = 0; // x jobbra, y felfelé
	int i = 0;
	bool irany = true;
	while(i < 50)
	{

		if ( (x!=0 || y!=0) && ((x*x + y*y)% 3 == 0 || (x * x + y * y) % 5 == 0) ) irany = !irany;
		
		if (irany)
		{
			x += 1 ;
		}
		else if (!irany)
		{
			y += 1 ;
		}

		i++;
	}

	cout << "x: " << x << endl << "y: " << y << endl;


	return 0;
}