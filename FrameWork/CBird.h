#ifndef BIRD_H
#define BIRD_H
#include "Include.h"

enum DIRECT {    // 열거형 정의
	DLEFT,
	DRIGHT,
	DUP,
	DDOWN
};
class CBird
{
	double x, y;
	Sprite Bdimg[2];
	DIRECT direct;
public:
	CBird();
	~CBird();

	DWORD m_BirdAniTime;
	void SetDirect(DIRECT _direct);
	int m_BirdCount;
	void SetXY(double x, double y);
	void Init();
	void Update();
	void Draw();
	void Draw(int x,int y);
};

extern CBird bird;
#endif // !BIRTH_H



