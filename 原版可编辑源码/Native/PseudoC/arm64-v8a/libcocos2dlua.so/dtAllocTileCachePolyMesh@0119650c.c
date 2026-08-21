
/* dtAllocTileCachePolyMesh(dtTileCacheAlloc*) */

void dtAllocTileCachePolyMesh(dtTileCacheAlloc *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*(long *)param_1 + 0x18))(param_1,0x30);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  return;
}

