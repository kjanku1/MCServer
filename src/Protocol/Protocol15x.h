
// Protocol15x.h

/*
Declares the 1.5.x protocol classes:
	- cProtocol150
		- release 1.5 and 1.5.1 protocol (#60)
		- release 1.5.2 protocol (#61; no relevant changes found)
*/





#pragma once

#include "Protocol14x.h"





class cProtocol150 :
	public cProtocol146
{
	typedef cProtocol146 super;
	
public:
	cProtocol150(cClientHandle * a_Client);
	
	virtual void SendWindowOpen          (const cWindow & a_Window) override;
	virtual void SendParticleEffect      (const AString & a_ParticleName, float a_SrcX, float a_SrcY, float a_SrcZ, float a_OffsetX, float a_OffsetY, float a_OffsetZ, float a_ParticleData, int a_ParticleAmount) override;
	virtual void SendScoreboardObjective (const AString & a_Name, const AString & a_DisplayName, Byte a_Mode) override;
	virtual void SendScoreUpdate         (const AString & a_Objective, const AString & a_Player, cObjective::Score a_Score, Byte a_Mode) override;
	virtual void SendDisplayObjective    (const AString & a_Objective, cScoreboard::eDisplaySlot a_Display) override;

	virtual int ParseWindowClick(void);
} ;




