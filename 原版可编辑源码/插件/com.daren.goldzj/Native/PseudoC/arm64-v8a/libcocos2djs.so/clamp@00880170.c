
/* cocos2d::Vec4::clamp(cocos2d::Vec4 const&, cocos2d::Vec4 const&) */

void __thiscall cocos2d::Vec4::clamp(Vec4 *this,Vec4 *param_1,Vec4 *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)param_1;
  fVar1 = *(float *)this;
  if (*(float *)this < fVar2) {
    *(float *)this = fVar2;
    fVar1 = fVar2;
  }
  if (*(float *)param_2 < fVar1) {
    *(float *)this = *(float *)param_2;
  }
  fVar2 = *(float *)(param_1 + 4);
  fVar1 = *(float *)(this + 4);
  if (*(float *)(this + 4) < fVar2) {
    *(float *)(this + 4) = fVar2;
    fVar1 = fVar2;
  }
  if (*(float *)(param_2 + 4) < fVar1) {
    *(float *)(this + 4) = *(float *)(param_2 + 4);
  }
  fVar2 = *(float *)(param_1 + 8);
  fVar1 = *(float *)(this + 8);
  if (*(float *)(this + 8) < fVar2) {
    *(float *)(this + 8) = fVar2;
    fVar1 = fVar2;
  }
  if (*(float *)(param_2 + 8) < fVar1) {
    *(float *)(this + 8) = *(float *)(param_2 + 8);
  }
  fVar2 = *(float *)(param_1 + 0xc);
  fVar1 = *(float *)(this + 0xc);
  if (*(float *)(this + 0xc) < fVar2) {
    *(float *)(this + 0xc) = fVar2;
    fVar1 = fVar2;
  }
  if (*(float *)(param_2 + 0xc) < fVar1) {
    *(float *)(this + 0xc) = *(float *)(param_2 + 0xc);
  }
  return;
}

