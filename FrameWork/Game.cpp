#include "Include.h"

Game::Game()
{
}

Game::~Game()
{
}

void Game::Init()
{
	map.Init();
	target.Init();
	monster.Init();
#pragma region 임의추가
	bird.Init();
	block.Init();
#pragma endregion
	sound.Init();
	Gmanager.Init();
	// 데이타 베이스///////////////////
	sql.Init();
}

void Game::Draw()
{
	map.Draw();
	monster.Draw();
	target.Draw();
#pragma region 임의추가
	bird.Draw();
	block.Draw();
#pragma endregion
	Gmanager.Draw();	
	// 데이타 베이스///////////////////
	sql.Draw();
}

// Chap, 재정의 함수 호출
void Game::Update(double frame)
{
	static DWORD a = 0;
	if (GetTickCount64() - a > frame)
	{
		key.Update();
		target.Update();
		monster.Update();
		// 입 맛에 맞게		
		map.Update(130);
		Gmanager.Update();
#pragma region 임의추가
		bird.Update();
		block.Update();
#pragma endregion			
		// 데이타 베이스///////////////////
		// 입 맛에 맞게 (여기선 안쓰임..프레임 값이 필요 할때만.. 그냥 방법만...)
		sql.Update(frame+1000);
		a = GetTickCount64();
	}
}


void Game::OnMessage( MSG* msg )
{

}