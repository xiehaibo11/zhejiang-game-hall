
/* cocos2d::Vec3::Vec3(float const*) */

void __thiscall cocos2d::Vec3::Vec3(Vec3 *this,float *param_1)

{
  *(float *)this = *param_1;
  *(float *)(this + 4) = param_1[1];
  *(float *)(this + 8) = param_1[2];
  return;
}

