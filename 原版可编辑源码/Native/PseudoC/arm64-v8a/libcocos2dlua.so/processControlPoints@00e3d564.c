
/* cocos2d::PUDynamicAttributeCurved::processControlPoints() */

void __thiscall
cocos2d::PUDynamicAttributeCurved::processControlPoints(PUDynamicAttributeCurved *this)

{
  long lVar1;
  float *pfVar2;
  PUControlPointSorter aPStack_48 [16];
  long local_38;
  float *pfVar3;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(Vec2 **)(this + 0xb0) != *(Vec2 **)(this + 0xb8)) {
    std::__ndk1::__sort<cocos2d::PUControlPointSorter&,cocos2d::Vec2*>
              (*(Vec2 **)(this + 0xb0),*(Vec2 **)(this + 0xb8),aPStack_48);
    *(float *)(this + 0x2c) = *(float *)(*(long *)(this + 0xb8) + -8) - **(float **)(this + 0xb0);
    if (*(int *)(this + 0xa8) == 1) {
      PUSimpleSpline::clear((PUSimpleSpline *)(this + 0x30));
      pfVar2 = *(float **)(this + 0xb0);
      if (*(float **)(this + 0xb0) != *(float **)(this + 0xb8)) {
        do {
          pfVar3 = pfVar2 + 2;
          Vec3::Vec3((Vec3 *)aPStack_48,*pfVar2,pfVar2[1],0.0);
          PUSimpleSpline::addPoint((PUSimpleSpline *)(this + 0x30),(Vec3 *)aPStack_48);
          pfVar2 = pfVar3;
        } while (pfVar3 != *(float **)(this + 0xb8));
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

