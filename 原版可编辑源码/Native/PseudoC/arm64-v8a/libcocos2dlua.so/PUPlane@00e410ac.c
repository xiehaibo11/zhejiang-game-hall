
/* cocos2d::PUPlane::PUPlane(float, float, float, float) */

void __thiscall
cocos2d::PUPlane::PUPlane(PUPlane *this,float param_1,float param_2,float param_3,float param_4)

{
  Vec3::Vec3((Vec3 *)this,param_1,param_2,param_3);
  *(float *)(this + 0xc) = param_4;
  return;
}

