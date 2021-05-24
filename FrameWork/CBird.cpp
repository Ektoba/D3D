#include "CBird.h"
CBird bird;
CBird::CBird()
{
	x = y = 500;
	m_BirdAniTime = 0;
	m_BirdCount = 0;
}

CBird::~CBird()
{
}

void CBird::SetDirect(DIRECT _direct)
{
	direct = _direct;
}

void CBird::SetXY(double _x, double _y)
{
	x = _x; y = _y;
}

void CBird::Init()
{
	char FileName[256];
	for (int i = 0; i < 2; i++)
	{
		sprintf_s(FileName, "./resource/Img/Bird/bird_fly%02d.png", i + 1);
		Bdimg[i].Create(FileName, false, D3DCOLOR_XRGB(0, 0, 0));
	}
}

void CBird::Update()
{
	if (GetTickCount() - m_BirdAniTime > 1000)
	{
		m_BirdCount++;
		if (m_BirdCount > 1)m_BirdCount = 0;
		m_BirdAniTime = GetTickCount();
	}
}

void CBird::Draw()
{
	if (Gmanager.m_GameSpeed == true) {
		switch (direct) {
		case DLEFT:
			Bdimg[m_BirdCount].Render((float)x, (float)y, 0, 1, 1);
			break;
		case DRIGHT :
			Bdimg[m_BirdCount].Render((float)x, (float)y, 0, -1, 1);
			break;
		case DUP:			
			Bdimg[m_BirdCount].Render((float)x, (float)y, -2, -1, 1);
			break;
		case DDOWN:
			if (direct == DLEFT)
				Bdimg[m_BirdCount].Render((float)x, (float)y, 2, 1, 1);
			else
				Bdimg[m_BirdCount].Render((float)x, (float)y, 2, -1, 1);				
			break;
		}		
	}		
}

void CBird::Draw(int _x, int _y)
{
	if (Gmanager.m_GameSpeed == true)
		x += _x; y += _y;
}