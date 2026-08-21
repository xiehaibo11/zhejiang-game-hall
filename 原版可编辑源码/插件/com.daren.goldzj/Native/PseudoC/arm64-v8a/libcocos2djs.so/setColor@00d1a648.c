
/* spine::SkeletonCacheAnimation::setColor(cocos2d::Color4B&) */

void __thiscall
spine::SkeletonCacheAnimation::setColor(SkeletonCacheAnimation *this,Color4B *param_1)

{
  float fVar1;
  
  fVar1 = (float)NEON_ucvtf((uint)(byte)*param_1);
  *(float *)(this + 0x20) = fVar1 / 255.0;
  fVar1 = (float)NEON_ucvtf((uint)(byte)param_1[1]);
  *(float *)(this + 0x24) = fVar1 / 255.0;
  fVar1 = (float)NEON_ucvtf((uint)(byte)param_1[2]);
  *(float *)(this + 0x28) = fVar1 / 255.0;
  fVar1 = (float)NEON_ucvtf((uint)(byte)param_1[3]);
  *(float *)(this + 0x2c) = fVar1 / 255.0;
  return;
}

