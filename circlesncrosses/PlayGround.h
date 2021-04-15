#pragma once
#include <iostream>
#include "box.h"
class PlayGround
{
public:
	PlayGround()
	{
		 empty = new Empty();
		 active=new Active();
		 cross= new Cross();
		 circle = new Circle();
		 for (int i = 0; i <= 2; i++)
		 {
			 for (int j = 0; j <= 2; j++)
			 {
				 a[i][j] = empty;
			 }
		 }
	}
	void playground()
	{
		a[0][1] = circle;
	}
	void print()
	{
		for (int i = 0; i <= 2; i++)
		{
			for (int j = 0; j <= 2; j++)
			{
				std::cout << a[i][j]->Draw();
			}
			std::cout << std::endl;
		}
	}
	void activePos(int pos)
	{
		pos = pos - 1;
		int j = pos % 3;
		int i = pos / 3;
		if (a[i][j] == empty)
		{
			a[i][j] = active;
			char t1 = a[i][j]->Draw();
			char t2 = active->Draw();
			int p = 0;
		}
	}
private:
	box* a[3][3];
	box* empty;
	box* active;
	box* cross;
	box* circle;
	box* buf;
};

