
/* cocos2d::Vec2::set(float const*) */

void __thiscall cocos2d::Vec2::set(Vec2 *this,float *param_1)

{
  *(float *)this = *param_1;
  *(float *)(this + 4) = param_1[1];
  return;
}

