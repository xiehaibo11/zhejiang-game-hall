
/* cocos2d::Quaternion::set(float*) */

void __thiscall cocos2d::Quaternion::set(Quaternion *this,float *param_1)

{
  *(float *)this = *param_1;
  *(float *)(this + 4) = param_1[1];
  *(float *)(this + 8) = param_1[2];
  *(float *)(this + 0xc) = param_1[3];
  return;
}

