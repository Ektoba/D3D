#pragma once

/* ---------------------------------------------------
///////////////// ���α׷� ���� //////////////////////

		���̺귯���� �ʿ��� �����Դϴ�.
		����� �ȵſ�~~^^;

//////////////////////////////////////////////////////
-----------------------------------------------------*/
#pragma region ���̺귯��
#pragma comment(lib,"d3d9.lib")
#pragma comment(lib,"d3dx9.lib")
#pragma comment(lib,"dsound.lib")
#pragma endregion
#pragma region DB
// ����Ÿ ���̽�///////////////////
//#include <my_global.h>
#include <winsock2.h>
#include <mysql.h>
#pragma comment(lib, "libmySQL.lib")
//////////////////////////////////
#pragma endregion
#pragma region INCLUDE
#include <windows.h>
#include <mmsystem.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

#include <d3d9.h>
#include <d3dx9.h>
#include <dsound.h>
#include "DXUTsound.h"

#include "Define.h"
#include "DeviceFont.h"
#include "Sprite.h"
#include "Chap.h"
#include "resource.h"
#pragma endregion
#pragma region ��������
/* ---------------------------------------------------
///////////////// ����� �߰� ���� ///////////////////

		���� Ŭ���� ���� �� ����
		��������� �߰��� �ּ���~

//////////////////////////////////////////////////////
-----------------------------------------------------*/
#include "Game.h"
#include "Logo.h"
#include "Menu.h"
#include "Over.h"
#include "CMng.h"

//#include "Night.h"

#include "Map.h"
#include "Target.h"
#include "Monster.h"

#include "Key.h"
#include "Sound.h"
#include "GameManager.h"
#pragma region �����߰�
#include "CBird.h"
#include "Block.h"
#include "Build.h"
#pragma endregion


#pragma endregion
// ����Ÿ ���̽�///////////////////
#include "Mysql.h"

/* ---------------------------------------------------
///////////////// ����� �߰� ���� ///////////////////

		Ű �Է� ó�� �Լ��Դϴ�.

//////////////////////////////////////////////////////
-----------------------------------------------------*/

inline int KeyDown	( int vk ) 
{ 
	return ( (GetAsyncKeyState(vk) & 0x8000) ? 1:0 ); 
}

inline int KeyUp	( int vk ) 
{ 
	return ( (GetAsyncKeyState(vk) & 0x8000) ? 0:1 ); 
}