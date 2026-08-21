
/* cocos2d::Vec3::Vec3(float, float, float) */

void __thiscall cocos2d::Vec3::Vec3(Vec3 *this,float param_1,float param_2,float param_3)

{
  *(float *)this = param_1;
  *(float *)(this + 4) = param_2;
  *(float *)(this + 8) = param_3;
  return;
}

