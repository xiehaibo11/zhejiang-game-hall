
/* cocos2d::ProgressTimer::vertexFromAlphaPoint(cocos2d::Vec2) */

void cocos2d::ProgressTimer::vertexFromAlphaPoint(long param_1)

{
  if (*(long *)(param_1 + 0x310) != 0) {
    NEON_fmov(0x3f800000,4);
    return;
  }
  return;
}

