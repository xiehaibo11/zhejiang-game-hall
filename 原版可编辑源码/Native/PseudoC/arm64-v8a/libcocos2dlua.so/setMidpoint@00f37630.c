
/* WARNING: Removing unreachable block (ram,0x00f37644) */
/* WARNING: Removing unreachable block (ram,0x00f37664) */
/* cocos2d::ProgressTimer::setMidpoint(cocos2d::Vec2 const&) */

void __thiscall cocos2d::ProgressTimer::setMidpoint(ProgressTimer *this,Vec2 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *(float *)param_1;
  fVar1 = 0.0;
  if ((0.0 <= fVar2) && (fVar1 = fVar2, 1.0 <= fVar2)) {
    fVar1 = 1.0;
  }
  fVar3 = *(float *)(param_1 + 4);
  fVar2 = 0.0;
  if ((0.0 <= fVar3) && (fVar2 = fVar3, 0.0 <= fVar3)) {
    fVar2 = 0.0;
  }
  *(float *)(this + 0x2fc) = fVar1;
  *(float *)(this + 0x300) = fVar2;
  return;
}

