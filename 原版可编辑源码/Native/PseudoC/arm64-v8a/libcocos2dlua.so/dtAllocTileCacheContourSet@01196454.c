
/* dtAllocTileCacheContourSet(dtTileCacheAlloc*) */

void dtAllocTileCacheContourSet(dtTileCacheAlloc *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*(long *)param_1 + 0x18))(param_1,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  return;
}

