#ifndef BUILD_H
#define BUILD_H
#include "Include.h"
enum class BUILD {
	COMMAND_CENTER,
	VESPENE_REFINERY,
	BARRACKS,	
	FACTORY,
	TURRECT,
	TOTAL
};
class CTerranBuild
{
	int mHealth;
	Sprite mCommandCenter;
	Sprite mBarracks;
	Sprite mTurret;
	Sprite mFactory;
	Sprite mVespeneRefinery;
	BUILD mBuild;
public:
	CTerranBuild();
	CTerranBuild(BUILD build);
	~CTerranBuild();
	void SetBuild(BUILD build);
	void Init();
	void Update();
	void Draw(POINT point);
};
#endif // !BUILD_H



