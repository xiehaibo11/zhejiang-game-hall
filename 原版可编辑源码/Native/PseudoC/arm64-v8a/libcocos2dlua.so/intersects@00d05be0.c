
/* cocos2d::AABB::intersects(cocos2d::AABB const&) const */

bool __thiscall cocos2d::AABB::intersects(AABB *this,AABB *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)this;
  fVar1 = *(float *)param_1;
  if ((fVar2 < fVar1) || (*(float *)(param_1 + 0xc) < fVar2)) {
    if (fVar1 < fVar2) {
      return false;
    }
    if (*(float *)(this + 0xc) < fVar1) {
      return false;
    }
  }
  fVar2 = *(float *)(this + 4);
  fVar1 = *(float *)(param_1 + 4);
  if ((fVar2 < fVar1) || (*(float *)(param_1 + 0x10) < fVar2)) {
    if (fVar1 < fVar2) {
      return false;
    }
    if (*(float *)(this + 0x10) < fVar1) {
      return false;
    }
  }
  fVar2 = *(float *)(this + 8);
  fVar1 = *(float *)(param_1 + 8);
  if ((fVar1 <= fVar2) && (fVar2 <= *(float *)(param_1 + 0x14))) {
    return true;
  }
  if (fVar1 < fVar2) {
    return false;
  }
  return fVar1 <= *(float *)(this + 0x14);
}

