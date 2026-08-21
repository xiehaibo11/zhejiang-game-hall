
/* cocos2d::Vec3::clamp(cocos2d::Vec3 const&, cocos2d::Vec3 const&) */

void __thiscall cocos2d::Vec3::clamp(Vec3 *this,Vec3 *param_1,Vec3 *param_2)

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
                    /* try { // try from 0099cbf4 to 00a9cc47 has its CatchHandler @ 0099cbf4
                       catch() { ... } // from try @ 0099cbf4 with catch @ 0099cbf4
                       catch() { ... } // from try @ 0099cd58 with catch @ 0099cbf4 */
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
  return;
}

