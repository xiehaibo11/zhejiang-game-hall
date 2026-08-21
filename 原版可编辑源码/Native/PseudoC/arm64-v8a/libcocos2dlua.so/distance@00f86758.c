
/* cocos2d::Vec2::distance(cocos2d::Vec2 const&) const */

float __thiscall cocos2d::Vec2::distance(Vec2 *this,Vec2 *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)*(undefined8 *)param_1 - (float)*(undefined8 *)this;
  fVar2 = (float)((ulong)*(undefined8 *)param_1 >> 0x20) -
          (float)((ulong)*(undefined8 *)this >> 0x20);
  return SQRT(fVar1 * fVar1 + fVar2 * fVar2);
}

