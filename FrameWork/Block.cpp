#include "include.h"
CBlock block;
CBlock::CBlock()
{
	Init();
	debug = false;
}

CBlock::~CBlock()
{
}

void CBlock::Init()
{	
	for (int x = 0; x < MAP_WIDTH; ++x)
	{
		for (int y = 0; y < MAP_HEIGHT; ++y)
		{
			block[x][y] = 1;
		}		
	}
	
}

void CBlock::Update()
{

}

void CBlock::Draw()
{	
	char temp[10];
	if (debug) {		
		for (int x = 0; x < MAP_WIDTH; ++x)
		{
			for (int y = 0; y < MAP_HEIGHT; ++y)
			{
#pragma region itoa()
				/*
				*	첫번째 인수 - 숫자
				*	두번째 인수 - 버퍼
				*	세번째 인수 - 진수
				*/
#pragma endregion
				dv_font.DrawString(
					_itoa(block[x][y], temp, 10),
					x * 20, y * 20
				);
			}
		}
	}
}

void CBlock::SetDebug(bool mode)
{
	debug = mode;
}

void CBlock::SetBlockTime(DWORD TIME)
{
	mBlockTime = TIME;
}
