
/* cocos2d::PUBoxCollider::isSmallestValue(float, cocos2d::Vec3 const&) */

bool __thiscall
cocos2d::PUBoxCollider::isSmallestValue(PUBoxCollider *this,float param_1,Vec3 *param_2)

{
  if (*(float *)param_2 - *(float *)(this + 0xcc) < param_1) {
    return false;
  }
  return param_1 <= *(float *)(this + 0xe0) - *(float *)(param_2 + 8) &&
         (param_1 <= *(float *)(param_2 + 8) - *(float *)(this + 0xdc) &&
         (param_1 <= *(float *)(this + 0xd8) - *(float *)(param_2 + 4) &&
         (param_1 <= *(float *)(param_2 + 4) - *(float *)(this + 0xd4) &&
         param_1 <= *(float *)(this + 0xd0) - *(float *)param_2)));
}

