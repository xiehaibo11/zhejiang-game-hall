
/* cocos2d::Vec2::fuzzyEquals(cocos2d::Vec2 const&, float) const */

undefined8 __thiscall cocos2d::Vec2::fuzzyEquals(Vec2 *this,Vec2 *param_1,float param_2)

{
  if ((*(float *)this - param_2 <= *(float *)param_1) &&
     (*(float *)param_1 <= *(float *)this + param_2)) {
    if ((*(float *)(this + 4) - param_2 <= *(float *)(param_1 + 4)) &&
       (*(float *)(param_1 + 4) <= *(float *)(this + 4) + param_2)) {
      return 1;
    }
  }
  return 0;
}

