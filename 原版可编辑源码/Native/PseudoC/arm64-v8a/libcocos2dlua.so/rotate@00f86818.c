
/* cocos2d::Vec2::rotate(cocos2d::Vec2 const&, float) */

void __thiscall cocos2d::Vec2::rotate(Vec2 *this,Vec2 *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_28;
  float fStack_24;
  
  sincosf(param_2,&fStack_24,&local_28);
  fVar2 = *(float *)param_1;
  if (fVar2 == 0.0) {
    fVar3 = *(float *)(param_1 + 4);
    fVar4 = *(float *)this;
    if (fVar3 == 0.0) {
      fVar1 = local_28 * fVar4 - fStack_24 * *(float *)(this + 4);
      fVar3 = fStack_24 * fVar4 + local_28 * *(float *)(this + 4);
      goto LAB_00f868b0;
    }
  }
  else {
    fVar4 = *(float *)this;
    fVar3 = *(float *)(param_1 + 4);
  }
  fVar1 = fVar2 + (local_28 * (fVar4 - fVar2) - fStack_24 * (*(float *)(this + 4) - fVar3));
  fVar3 = fVar3 + fStack_24 * (fVar4 - fVar2) + local_28 * (*(float *)(this + 4) - fVar3);
LAB_00f868b0:
  *(float *)this = fVar1;
  *(float *)(this + 4) = fVar3;
  return;
}

