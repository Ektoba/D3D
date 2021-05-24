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
#pragma region �����߰�
	bird.Init();
	block.Init();
#pragma endregion
	sound.Init();
	Gmanager.Init();
	// ����Ÿ ���̽�///////////////////
	sql.Init();
}

void Game::Draw()
{
	map.Draw();
	monster.Draw();
	target.Draw();
#pragma region �����߰�
	bird.Draw();
	block.Draw();
#pragma endregion
	Gmanager.Draw();	
	// ����Ÿ ���̽�///////////////////
	sql.Draw();
}

// Chap, ������ �Լ� ȣ��
void Game::Update(double frame)
{
	static DWORD a = 0;
	if (GetTickCount64() - a > frame)
	{
		key.Update();
		target.Update();
		monster.Update();
		// �� ���� �°�		
		map.Update(130);
		Gmanager.Update();
#pragma region �����߰�
		bird.Update();
		block.Update();
#pragma endregion			
		// ����Ÿ ���̽�///////////////////
		// �� ���� �°� (���⼱ �Ⱦ���..������ ���� �ʿ� �Ҷ���.. �׳� �����...)
		sql.Update(frame+1000);
		a = GetTickCount64();
	}
}


void Game::OnMessage( MSG* msg )
{

}