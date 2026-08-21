
/* dtTileCache::getObstacleBounds(dtTileCacheObstacle const*, float*, float*) const */

void __thiscall
dtTileCache::getObstacleBounds
          (dtTileCache *this,dtTileCacheObstacle *param_1,float *param_2,float *param_3)

{
  *param_2 = *(float *)param_1 - *(float *)(param_1 + 0xc);
  param_2[1] = *(float *)(param_1 + 4);
  param_2[2] = *(float *)(param_1 + 8) - *(float *)(param_1 + 0xc);
  *param_3 = *(float *)param_1 + *(float *)(param_1 + 0xc);
  param_3[1] = *(float *)(param_1 + 4) + *(float *)(param_1 + 0x10);
  param_3[2] = *(float *)(param_1 + 8) + *(float *)(param_1 + 0xc);
  return;
}

