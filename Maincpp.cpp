#include <iostream>
using namespace std;

//Egy Pitantghoras negra fajt�j� hangya m�szik egy pap�rlapon.
//A lap bal als� cs�csk�b�l indul �s vagy jobbra vagy felfel� halad.
//Jobbra indul, �s mindig ir�nyt v�lt, ha az indul�si pontt�l val� t�vols�gnak n�gyzet�sszege oszthat� h�rommal vagy �ttel.
//Hol lesz a hangya 50 l�p�s m�lva ?


int main()
{
	int x = 0, y = 0; // x jobbra, y felfel�
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