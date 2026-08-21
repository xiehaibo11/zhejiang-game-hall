
/* cocos2d::PUSimpleSpline::interpolate(float) const */

void __thiscall cocos2d::PUSimpleSpline::interpolate(PUSimpleSpline *this,float param_1)

{
  uint uVar1;
  float fVar2;
  
  fVar2 = (float)((*(long *)(this + 0x10) - *(long *)(this + 8) >> 2) * -0x5555555555555555 - 1) *
          param_1;
  uVar1 = (uint)fVar2;
  interpolate(this,uVar1,fVar2 - (float)uVar1);
  return;
}

