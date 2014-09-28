
#include "Globals.h"

#include "BlockEntities/ChestEntity.h"

typedef cItemCallback<cChestEntity> cChestCallback;

#include "IncrementalRedstoneSimulator.inc"

#include "Chunk.h"
#include "World.h"
#include "Blocks/GetHandlerCompileTimeTemplate.h"
#include "Blocks/BlockTorch.h"
#include "Blocks/BlockLever.h"
#include "Blocks/BlockButton.h"
#include "Blocks/BlockTripwireHook.h"
#include "Blocks/BlockDoor.h"
#include "Blocks/BlockPiston.h"

cRedstoneSimulator<cChunk, cWorld> * MakeIncrementalRedstoneSimulator(cWorld & a_World)
{
	return new cIncrementalRedstoneSimulator<cChunk, cWorld, GetHandlerCompileTime, cChestEntity>(a_World);
}

