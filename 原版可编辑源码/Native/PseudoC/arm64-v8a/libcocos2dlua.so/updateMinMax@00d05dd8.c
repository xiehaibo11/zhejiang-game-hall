
/* cocos2d::AABB::updateMinMax(cocos2d::Vec3 const*, long) */

void __thiscall cocos2d::AABB::updateMinMax(AABB *this,Vec3 *param_1,long param_2)

{
  Vec3 *pVVar1;
  float fVar2;
  float fVar3;
  
  if (0 < param_2) {
    fVar2 = *(float *)this;
    pVVar1 = param_1 + 4;
    do {
      fVar3 = *(float *)(pVVar1 + -4);
      if (fVar3 < fVar2) {
        *(float *)this = fVar3;
        fVar2 = fVar3;
      }
      if (*(float *)pVVar1 < *(float *)(this + 4)) {
        *(float *)(this + 4) = *(float *)pVVar1;
      }
      if (*(float *)(pVVar1 + 4) < *(float *)(this + 8)) {
        *(float *)(this + 8) = *(float *)(pVVar1 + 4);
      }
      if (*(float *)(this + 0xc) < *(float *)(pVVar1 + -4)) {
        *(float *)(this + 0xc) = *(float *)(pVVar1 + -4);
      }
      if (*(float *)(this + 0x10) < *(float *)pVVar1) {
        *(float *)(this + 0x10) = *(float *)pVVar1;
      }
      if (*(float *)(this + 0x14) < *(float *)(pVVar1 + 4)) {
        *(float *)(this + 0x14) = *(float *)(pVVar1 + 4);
      }
      param_2 = param_2 + -1;
      pVVar1 = pVVar1 + 0xc;
    } while (param_2 != 0);
  }
  return;
}

