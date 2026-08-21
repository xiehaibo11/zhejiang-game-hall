
/* dtTileCache::calcTightTileBounds(dtTileCacheLayerHeader const*, float*, float*) const */

void __thiscall
dtTileCache::calcTightTileBounds
          (dtTileCache *this,dtTileCacheLayerHeader *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(this + 0x34);
  fVar1 = (float)NEON_ucvtf((uint)(byte)param_1[0x32]);
  *param_2 = *(float *)(param_1 + 0x14) + fVar2 * fVar1;
  param_2[1] = *(float *)(param_1 + 0x18);
  fVar1 = (float)NEON_ucvtf((uint)(byte)param_1[0x34]);
  param_2[2] = *(float *)(param_1 + 0x1c) + fVar2 * fVar1;
  *param_3 = *(float *)(param_1 + 0x14) + fVar2 * (float)((byte)param_1[0x33] + 1);
  param_3[1] = *(float *)(param_1 + 0x24);
  param_3[2] = *(float *)(param_1 + 0x1c) + fVar2 * (float)((byte)param_1[0x35] + 1);
  return;
}

