
/* cocos2d::PUPlane::PUPlane(cocos2d::Vec3 const&, float) */

void __thiscall cocos2d::PUPlane::PUPlane(PUPlane *this,Vec3 *param_1,float param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  Vec3::Vec3((Vec3 *)this);
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined8 *)param_1;
  *(float *)(this + 0xc) = -param_2;
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined8 *)this = uVar2;
  return;
}

