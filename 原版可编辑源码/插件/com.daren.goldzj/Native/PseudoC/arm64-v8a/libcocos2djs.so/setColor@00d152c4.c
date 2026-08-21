
/* spine::SkeletonRenderer::setColor(cocos2d::Color4B&) */

void __thiscall spine::SkeletonRenderer::setColor(SkeletonRenderer *this,Color4B *param_1)

{
  float fVar1;
  
  fVar1 = (float)NEON_ucvtf((uint)(byte)*param_1);
  *(float *)(this + 0x4c) = fVar1 / 255.0;
  fVar1 = (float)NEON_ucvtf((uint)(byte)param_1[1]);
  *(float *)(this + 0x50) = fVar1 / 255.0;
  fVar1 = (float)NEON_ucvtf((uint)(byte)param_1[2]);
  *(float *)(this + 0x54) = fVar1 / 255.0;
  fVar1 = (float)NEON_ucvtf((uint)(byte)param_1[3]);
  *(float *)(this + 0x58) = fVar1 / 255.0;
  return;
}

