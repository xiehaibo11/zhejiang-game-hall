
/* cocos2d::PUPlane::PUPlane(cocos2d::PUPlane const&) */

void __thiscall cocos2d::PUPlane::PUPlane(PUPlane *this,PUPlane *param_1)

{
  undefined8 uVar1;
  
  Vec3::Vec3((Vec3 *)this);
  uVar1 = *(undefined8 *)param_1;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)this = uVar1;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  return;
}

