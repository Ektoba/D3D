#ifndef GAME_MANAGER_H
#define GAME_MANAGER_H
struct SysTem
{
	int m_Save1;
	int m_Save2;

};

class GameManager
{
	HWND hWnd;
	Sprite Menuimg[2];
public:
	GameManager(void);
	~GameManager(void);
	void SetHWND(HWND _hWnd) { hWnd = _hWnd; }
	FILE *fp;
	SysTem m_SysTem;

	bool m_Pause;
	int m_GameSpeed;
	
	DWORD GameTime;
	bool m_GameStart;

	bool m_Collision;

	void GameReset(void);
	void Init();
	void Update();
	void Draw();
	void Save();
	void Delete();
	
	
};

extern GameManager Gmanager;
#endif GAME_MANAGER_H