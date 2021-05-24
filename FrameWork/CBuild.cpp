#include "Build.h"
CTerranBuild::CTerranBuild()
{
	Init();
}
CTerranBuild::CTerranBuild(BUILD build)
{
	SetBuild(build);
	Init();
	switch (mBuild)
	{
	case BUILD::COMMAND_CENTER:
		mHealth = 400;
		break;
	case BUILD::BARRACKS:
		mHealth = 400;
		break;
	case BUILD::FACTORY:
		mHealth = 350;
		break;
	case BUILD::TURRECT:
		mHealth = 300;
		break;
	case BUILD::VESPENE_REFINERY:
		mHealth = 200;
		break;
	default: break;
	}
}
CTerranBuild::~CTerranBuild()
{
}
void CTerranBuild::SetBuild(BUILD build)
{
	mBuild = build;
}
void CTerranBuild::Init()
{
	int i;
	char FileName[256];

	//ƒø∏«µÂºæ≈Õ
	sprintf_s(FileName, "./resource/Img/TerranBuild/CommandCenter.png");
	mCommandCenter.Create(FileName, false, D3DCOLOR_XRGB(0, 255, 0));
	//∫£Ω∫«…∞°Ω∫
	sprintf_s(FileName, "./resource/Img/TerranBuild/VespeneRefiner.png");
	mVespeneRefinery.Create(FileName, false, D3DCOLOR_XRGB(0, 255, 0));
	//≈Õ∑ø
	sprintf_s(FileName, "./resource/Img/TerranBuild/Turrect.png");
	mTurret.Create(FileName, false, D3DCOLOR_XRGB(0, 255, 0));
	//∆—≈‰∏Æ
	sprintf_s(FileName, "./resource/Img/TerranBuild/Factory.png");
	mFactory.Create(FileName, false, D3DCOLOR_XRGB(0, 255, 0));	
}

void CTerranBuild::Update()
{

}

void CTerranBuild::Draw(POINT point)
{
	switch (mBuild) {
	case BUILD::COMMAND_CENTER:
		mCommandCenter.Render(point.x, point.y, 0, 1, 1);
		break;
	case BUILD::FACTORY:
		mFactory.Render(point.x, point.y, 0, 1, 1);
		break;
	case BUILD::BARRACKS:
		mBarracks.Render(point.x, point.y, 0, 1, 1);
		break;
	case BUILD::TURRECT:
		mTurret.Render(point.x, point.y, 0, 1, 1);
		break;
	default:break;
	}
}