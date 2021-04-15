#pragma once
class box
{
public:
	box()
	{

	}
	virtual char Draw() = 0;
};
class Cross :
	public box
{
	virtual char Draw()
	{
		return 'x';
	}
};
class Circle :
	public box
{
	virtual char Draw()
	{
		return 'o';
	}
};
class Active :
	public box
{
	virtual char Draw()
	{
		return '*';
	}
};
class Empty :
	public box
{
	virtual char Draw()
	{
		return ' ';
	}
};

