#ifndef SOUND_H
#define SOUND_H
class Sound
{

public:
	Sound(void);
	~Sound(void);


	CSoundManager* g_pSoundManager;
	CSound* m_Bk1;
	CSound* m_Shot;

	int m_Select;



	void Init();


};

extern Sound sound;
#endif // !SOUND_H