#ifndef BLOCK_H
#define BLOCK_H
#include "include.h"
#define MAP_WIDTH (SCREEN_WITH / 20)
#define MAP_HEIGHT (SCREEN_HEIGHT / 20)
typedef enum class TileInfo
{
	ROAD = 1,
	WALL,
	TREE,
	TILE_LENGTH
};
class CBlock {	
	POINT point;
	DWORD mBlockTime;
	bool debug;
	int block[MAP_WIDTH][MAP_HEIGHT];
	char val[10];
public:	
	CBlock();
	~CBlock();
	void Init();
	void Update();
	void Draw();
	void SetDebug(bool mode);
	void SetBlockTime(DWORD TIME);
	bool GetDebug() { return debug; }
};
extern CBlock block;
#endif // !BLOCK_H

