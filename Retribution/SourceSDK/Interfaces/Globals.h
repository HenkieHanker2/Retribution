#pragma once
class CGlobalVarsBase
{
public:
	float			realtime;
	int				framecount;
	float			absoluteframetime;
	float			faggot;
	float			curtime;
	float			frametime;
	int				maxClients;
	int				tickcount;
	float			interval_per_tick;
	float			interpolation_amount;
	int				simTicksThisFrame;
	int				network_protocol;
	void*			pSaveData;
private:
	bool			m_bClient;
	int				nTimestampNetworkingBase;
	int				nTimestampRandomizeWindow;
};