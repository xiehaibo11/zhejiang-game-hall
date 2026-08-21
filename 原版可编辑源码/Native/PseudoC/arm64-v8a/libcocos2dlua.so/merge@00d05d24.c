
/* cocos2d::AABB::merge(cocos2d::AABB const&) */

void __thiscall cocos2d::AABB::merge(AABB *this,AABB *param_1)

{
  float fVar1;
  
  fVar1 = *(float *)param_1;
  if (*(float *)this <= *(float *)param_1) {
    fVar1 = *(float *)this;
  }
  *(float *)this = fVar1;
  fVar1 = *(float *)(param_1 + 4);
  if (*(float *)(this + 4) <= *(float *)(param_1 + 4)) {
    fVar1 = *(float *)(this + 4);
  }
  *(float *)(this + 4) = fVar1;
  fVar1 = *(float *)(param_1 + 8);
  if (*(float *)(this + 8) <= *(float *)(param_1 + 8)) {
    fVar1 = *(float *)(this + 8);
  }
  *(float *)(this + 8) = fVar1;
  fVar1 = *(float *)(param_1 + 0xc);
  if (*(float *)(param_1 + 0xc) <= *(float *)(this + 0xc)) {
    fVar1 = *(float *)(this + 0xc);
  }
  *(float *)(this + 0xc) = fVar1;
  fVar1 = *(float *)(param_1 + 0x10);
  if (*(float *)(param_1 + 0x10) <= *(float *)(this + 0x10)) {
    fVar1 = *(float *)(this + 0x10);
  }
  *(float *)(this + 0x10) = fVar1;
  fVar1 = *(float *)(param_1 + 0x14);
  if (*(float *)(param_1 + 0x14) <= *(float *)(this + 0x14)) {
    fVar1 = *(float *)(this + 0x14);
  }
  *(float *)(this + 0x14) = fVar1;
  return;
}

