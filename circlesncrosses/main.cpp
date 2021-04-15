#include <iostream>
#include <Windows.h>
#include "PlayGround.h"



int main()
{   
	int pos;
	PlayGround * play = new PlayGround();
	do
	{
		play->playground();
		play->print();
		std::cin >> pos;
		play->activePos(pos);
	} while (pos != 0);
	system("pause");
}