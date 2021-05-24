#ifndef MAP_H
#define MAP_H
#include "Include.h"

enum class MAP {
	STARCRAFT,
	STAGE1,
	STAGE2,	
};
class Map
{
public :
	Map();
	~Map();
	bool tests;
	int Block[100][100] = {0};
	Sprite test;
		
	Sprite m_MapImg1_1[6];
	Sprite m_MapImg1_2[45];
	Sprite m_MapImg1_3[65];

	Sprite m_MapImg2_1[7];
	Sprite m_MapImg2_2[30];
	Sprite m_MapImg2_3[45];

	Sprite mStarMap;

	DWORD m_MapImg1_1_ani1;
	DWORD m_MapImg1_2_ani1;

	int m_MapImg1_1_ani1Count;
	int m_MapImg1_2_ani1Count;

	int m_MapImg2_1_ani1Count;
	int m_MapImg2_2_ani1Count;

	int m_Stage;
	MAP mStage;
	void Init();
	void Update(double frame);
	void Draw();
};
extern Map map;
#endif