
/* cocos2d::Quaternion::set(float, float, float, float) */

void __thiscall
cocos2d::Quaternion::set(Quaternion *this,float param_1,float param_2,float param_3,float param_4)

{
  *(float *)this = param_1;
  *(float *)(this + 4) = param_2;
  *(float *)(this + 8) = param_3;
  *(float *)(this + 0xc) = param_4;
  return;
}

