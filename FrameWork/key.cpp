#include "Include.h"

Key key;

Key::Key(void)
{

	
}

Key::~Key(void)
{
}


void Key::Update()
{
	// 시스템에 따라...GetTickCount/GetTickCount64
	if(KeyDown('1'))
	{
		if(GetTickCount64() - KeyTime > 200)
		{
			map.m_Stage = 1;
			KeyTime = GetTickCount64();
		}
	}

	if(KeyDown('2'))
	{
		if(GetTickCount64() - KeyTime > 200)
		{
			map.m_Stage = 2;
			KeyTime = GetTickCount64();
		}
		
	}

	if(KeyDown('3'))
	{
		if(GetTickCount64() - KeyTime > 200)
		{
			Gmanager.m_Collision = true;
			KeyTime = GetTickCount64();
		}
		
	}
	
	if(KeyDown('4'))
	{
		if(GetTickCount64() - KeyTime > 200)
		{
			monster.Reset();
			KeyTime = GetTickCount64();
		}
		
	}

	if(KeyDown('5'))
	{
		if(GetTickCount64() - KeyTime > 200)
		{
			if (block.GetDebug())
			{
				block.SetDebug(false);
			}
			else
			{
				block.SetDebug(true);
			}
			KeyTime = GetTickCount64();
		}
	
	}
	
	if(KeyDown('6'))
	{
		if(GetTickCount64() - KeyTime > 200)
		{
			CTerranBuild build(BUILD::COMMAND_CENTER);
			POINT point;
			::GetCursorPos(&point);
			::ScreenToClient(dv_font.GetHWND(), &point);
			build.Draw(point);
			KeyTime = GetTickCount64();
		}
	}



	if(KeyDown('7'))
	{
		if(GetTickCount64() - KeyTime > 200)
		{
			KeyTime = GetTickCount64();
		}
		
	}



	
	

	if(KeyDown('8'))
	{
		if(GetTickCount64() - KeyTime > 200)
		{

		}
		
	}

	if(KeyDown('9'))
	{
		if(GetTickCount64() - KeyTime > 200)
		{

			KeyTime = GetTickCount64();
		}
		
	}


	if(KeyDown('0'))
	{
		if(GetTickCount64() - KeyTime > 200)
		{

			KeyTime = GetTickCount64();
		}
		
	}






	if(KeyDown(VK_F1))
	{
		if(GetTickCount64() - KeyTime > 200)
		{	
			KeyTime = GetTickCount64();
		}
	
	}

	
	if(KeyDown(VK_F2))
	{
		if(GetTickCount64() - KeyTime > 200)
		{	
			KeyTime = GetTickCount64();
		}
	
	}

	
	if(KeyDown(VK_F3))
	{
		if(GetTickCount64() - KeyTime > 200)
		{	
			KeyTime = GetTickCount64();
		}
	
	}

	
	if(KeyDown(VK_F4))
	{
		if(GetTickCount64() - KeyTime > 200)
		{	
			KeyTime = GetTickCount64();
		}
	
	}

	
	if(KeyDown(VK_F5))
	{
		if(GetTickCount64() - KeyTime > 200)
		{
			KeyTime = GetTickCount64();
		}
	
	}

	
	if(KeyDown(VK_F6))
	{
		if(GetTickCount64() - KeyTime > 200)
		{	
			KeyTime = GetTickCount64();
		}
	
	}

	
	if(KeyDown(VK_F7))
	{
		if(GetTickCount64() - KeyTime > 200)
		{	
		
			KeyTime = GetTickCount64();
		}
	
	}

	
	if(KeyDown(VK_F8))
	{
		if(GetTickCount64() - KeyTime > 200)
		{		
			KeyTime = GetTickCount64();
		}
	
	}

	
	if(KeyDown(VK_F9))
	{
		if(GetTickCount64() - KeyTime > 200)
		{	
			KeyTime = GetTickCount64();
		}
	
	}

	
	if(KeyDown(VK_F10))
	{
		if(GetTickCount64() - KeyTime > 200)
		{
			KeyTime = GetTickCount64();
		}
	
	}

	
	if(KeyDown(VK_F11))
	{
		if(GetTickCount64() - KeyTime > 200)
		{
			KeyTime = GetTickCount64();
		}
	
	}

	
	if(KeyDown(VK_F12))
	{
		if(GetTickCount64() - KeyTime > 200)
		{	
			KeyTime = GetTickCount64();
		}
	
	}

	


	if(KeyDown(VK_SPACE) ) 
	{
		
		if(GetTickCount64() - KeyTime2 > 200)
		{
			if(Gmanager.m_GameStart==true )
			{

				target.m_Life = true;
				sound.m_Shot->Play(NULL);
				
				target.AniTime2 = GetTickCount64();
			}
				
			KeyTime2 = GetTickCount64();
		}
		
	}



	if(KeyDown(VK_LEFT))
	{
		if(GetTickCount64() - KeyTime1 > 10)
		{
			if(target.m_W<=0)
			{
				target.m_W = target.m_W;
				target.m_Target.dx=target.m_Target.dx;
			}
			else if(Gmanager.m_GameStart==true)
			{
				target.m_W-=5;
				target.m_Target.dx-=5;
				bird.SetDirect(DLEFT);
				bird.SetXY(target.m_Target.dx + 50, target.m_Target.dy + 50);
			}
			KeyTime1 = GetTickCount64();
		}
	}

	if(KeyDown(VK_RIGHT))
	{

		if(GetTickCount64() - KeyTime1 > 10)
		{
			if(target.m_W>=1190)
			{
				target.m_W = target.m_W;
				target.m_Target.dx=target.m_Target.dx;
			}
			else if(Gmanager.m_GameStart==true)
			{
				target.m_W+=5;
				target.m_Target.dx+=5;
				bird.SetDirect(DRIGHT);
				bird.SetXY(target.m_Target.dx + 50, target.m_Target.dy + 50);
			}
			KeyTime1 = GetTickCount64();
		}
		
	}

	
	if(KeyDown(VK_UP))
	{
		if(GetTickCount64() - KeyTime3 > 10)
		{	

			if(target.m_H<=0)
			{
				target.m_H = target.m_H;
				target.m_Target.dy=target.m_Target.dy;
			}
			else if(Gmanager.m_GameStart==true)
			{
				target.m_H-=5;
				target.m_Target.dy-=5;
				bird.SetDirect(DUP);
				bird.SetXY(target.m_Target.dx + 100, target.m_Target.dy + 100);
			}

			KeyTime3 = GetTickCount64();
		}
		
	}

	if(KeyDown(VK_DOWN))
	{

		if(GetTickCount64() - KeyTime3 > 10)
		{
			
			if(target.m_H>=670)
			{
				target.m_H = target.m_H;
				target.m_Target.dy=target.m_Target.dy;
			}
			else if(Gmanager.m_GameStart==true)
			{
				bird.SetDirect(DDOWN);
				target.m_H+=5;
				target.m_Target.dy+=5;
				bird.SetXY(target.m_Target.dx + 100, target.m_Target.dy + 100);
			}

			KeyTime3 = GetTickCount64();
		}
		
	}


	if(KeyDown('C') )
	{
		if(GetTickCount64() - KeyTime1 > 200)
		{	
			bird.Draw();
			KeyTime1 = GetTickCount64();
		}
	}




	
	if(KeyDown('N'))
	{
		
		if(GetTickCount64() - KeyTime > 200)
		{			
			KeyTime = GetTickCount64();
		}
	}

	
	if(KeyDown('A'))
	{
		if (GetTickCount64() - KeyTime > 200)
		{
			bird.Draw(-1, 0);
			KeyTime = GetTickCount64();			
		}
	}




	if(KeyDown('W') )
	{
		if(GetTickCount64() - KeyTime > 200)
		{
			
			KeyTime = GetTickCount64();
		}

	}


	if(KeyDown('E')  )
	{
		if(GetTickCount64() - KeyTime > 200)
		{	
			KeyTime = GetTickCount64();
		}
		
	}


	if(KeyDown('R') )
	{
		if(GetTickCount64() - KeyTime > 200)
		{

			KeyTime = GetTickCount64();
		}
	}


	if(KeyDown('S') )
	{
		if(GetTickCount64() - KeyTime > 200)
		{
	
			KeyTime = GetTickCount64();
		}
	}


	if(KeyDown('D') )
	{
		if(GetTickCount64() - KeyTime > 200)
		{
			bird.Draw(1, 0);
			KeyTime = GetTickCount64();
		}
	}


	if(KeyDown(VK_RETURN) ) 
	{
		
		if(GetTickCount64() - KeyTime1 > 200)
		{

			KeyTime1 = GetTickCount64();
		}
		
	}


}