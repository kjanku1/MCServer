
#pragma once

#include "BlockHandler.h"





class cBlockGravelHandler :
	public cBlockHandler
{
public:
	cBlockGravelHandler(BLOCKTYPE a_BlockType)
		: cBlockHandler(a_BlockType)
	{
	}

	virtual void ConvertToPickups(cItems & a_Pickups, NIBBLETYPE a_BlockMeta) override
	{
		cFastRandom Random;
		if (Random.NextInt(30) == 0)
		{
			a_Pickups.Add(E_ITEM_FLINT, 1, 0);
		}
		else
		{
			a_Pickups.Add(E_BLOCK_GRAVEL, 1, 0);
		}
	}
} ;




