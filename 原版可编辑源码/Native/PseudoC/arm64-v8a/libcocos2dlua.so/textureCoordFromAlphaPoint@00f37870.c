
/* cocos2d::ProgressTimer::textureCoordFromAlphaPoint(cocos2d::Vec2) */

float cocos2d::ProgressTimer::textureCoordFromAlphaPoint(float param_1,float param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_3 + 0x310);
  if (lVar1 == 0) {
    return 0.0;
  }
  if (*(char *)(lVar1 + 0x418) == '\0') {
    param_2 = param_1;
  }
  return *(float *)(lVar1 + 0x490) * param_2 + *(float *)(lVar1 + 0x478) * (1.0 - param_2);
}

