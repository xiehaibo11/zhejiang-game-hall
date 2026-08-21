
/* cocos2d::PURibbonTrail::setTrailLength(float) */

void __thiscall cocos2d::PURibbonTrail::setTrailLength(PURibbonTrail *this,float param_1)

{
  float fVar1;
  
  *(float *)(this + 0x158) = param_1;
  fVar1 = param_1 / (float)*(ulong *)(this + 8);
  *(float *)(this + 0x15c) = fVar1;
  *(float *)(this + 0x160) = fVar1 * fVar1;
  return;
}

