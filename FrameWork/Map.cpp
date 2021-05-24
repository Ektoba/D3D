#include "Include.h"

Map map;


Map::Map()
{
	m_Stage = 1;
	mStage = MAP::STARCRAFT;
}

Map::~Map()
{
}

void Map::Init()
{
	int i,j;
	char FileName[256];
	
	for(i = 0; i<6; i++ )
	{
		sprintf_s(FileName, "./resource/Img/map1/BG_Hades_1/BG_Hades_%04d.tga", i + 1);
		m_MapImg1_1[i].Create( FileName ,false,D3DCOLOR_XRGB(0,0,0));
		
	}

	j = 1;
	for(i = 0; i<45; i++ )
	{
		sprintf_s(FileName, "./resource/Img/map1/BG_Hades_2/BG_Hades_0002_%06d.tga", j);
		m_MapImg1_2[i].Create(FileName, false, D3DCOLOR_XRGB(0, 0, 0));
		j+=2;
		
	}

	for (int i = 0; i<65; i++)
	{
		sprintf_s(FileName, "./resource/Img/map1/BG_Medusa_3/BG_Medusa_fire_01_%04d.tga", i + 1);
		m_MapImg1_3[i].Create(FileName, false, D3DCOLOR_XRGB(0, 0, 0));

	}

	for (int i = 0; i<7; i++)
	{
		sprintf_s(FileName, "./resource/Img/map1/BG_Poseidon_1/BG_Poseidon_%04d.tga", i + 1);
		m_MapImg2_1[i].Create(FileName, false, D3DCOLOR_XRGB(0, 0, 0));

	}

	for(int i = 0; i<30; i++ )
	{
		sprintf_s(FileName, "./resource/Img/map1/BG_Poseidon_2/1%04d.png", i);
		m_MapImg2_2[i].Create(FileName,false,D3DCOLOR_XRGB(0,0,0));
		
	} 

	for(int i = 0; i<45; i++ )
	{
		sprintf_s(FileName, "./resource/Img/map1/BG_Poseidon_3/1%04d.png", i );
		m_MapImg2_3[i].Create(FileName,false,D3DCOLOR_XRGB(0,0,0));
		
	} 

#pragma region ½ºÅ¸ ¸Ê	
	sprintf_s(FileName, "./resource/Img/Map/StarBase.png");
	mStarMap.Create(FileName, false, D3DCOLOR_XRGB(0, 0, 0));
#pragma endregion

}

void Map::Update(double frame)
{
	if(GetTickCount64() - m_MapImg1_1_ani1 > frame)
	{
		switch (mStage) {
		case MAP::STAGE1:
			m_MapImg1_1_ani1Count++;
			m_MapImg1_2_ani1Count++;
			if (m_MapImg1_1_ani1Count > 44) m_MapImg1_1_ani1Count = 0;
			if (m_MapImg1_2_ani1Count > 64) m_MapImg1_2_ani1Count = 0;
			break;
		case MAP::STAGE2:
			m_MapImg2_1_ani1Count++;
			m_MapImg2_2_ani1Count++;
			if (m_MapImg2_1_ani1Count > 29) m_MapImg2_1_ani1Count = 0;
			if (m_MapImg2_2_ani1Count > 44) m_MapImg2_2_ani1Count = 0;
		case MAP::STARCRAFT:
			break;
		}
		m_MapImg1_1_ani1 = GetTickCount64();
	}

}
void Map::Draw()
{
	
	switch (mStage) {
	case MAP::STAGE1:
		m_MapImg1_1[0].Render(0, 0, 0, 1, 1);
		m_MapImg1_1[1].Render(0, 0, 0, 1, 1);
		m_MapImg1_1[3].Render(270, 70, 0, 1, 1);
		m_MapImg1_2[m_MapImg1_1_ani1Count].Render(0, 0, 0, 1.5, 1.5);
		m_MapImg1_1[2].Render(190, 0, 0, 1, 1);
		m_MapImg1_1[4].Render(900, 0, 0, 1, 1);
		m_MapImg1_1[5].Render(0, 0, 0, 1, 1);
		m_MapImg1_3[m_MapImg1_2_ani1Count].Render(0, 260, 0, 1, 1);
		m_MapImg1_3[m_MapImg1_2_ani1Count].Render(800, 260, 0, 1, 1);
		break;
	case MAP::STAGE2:
		m_MapImg2_1[0].Render(0, 0, 0, 1, 1);
		m_MapImg2_2[m_MapImg2_1_ani1Count].Render(165, 0, 0, 4, 1);
		m_MapImg2_1[1].Render(0, 0, 0, 1, 1);
		m_MapImg2_2[m_MapImg2_1_ani1Count].Render(300, 710, 0, 2.3, 1);
		m_MapImg2_1[2].Render(0, 0, 0, 1, 1);
		m_MapImg2_3[m_MapImg2_2_ani1Count].Render(0, -40, 0, 4, 2);
		m_MapImg2_1[3].Render(0, 0, 0, 1, 1);
		m_MapImg2_1[4].Render(0, 0, 0, 1, 1);
		m_MapImg2_1[5].Render(0, 0, 0, 1, 1);
		m_MapImg2_1[6].Render(0, 0, 0, 1, 1);
		break;
	case MAP::STARCRAFT:
		mStarMap.Render(0, 0, 0, 1, 1);
		break;
	}
}
