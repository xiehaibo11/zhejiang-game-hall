
/* cocos2d::PUPlane::redefine(cocos2d::Vec3 const&, cocos2d::Vec3 const&) */

void __thiscall cocos2d::PUPlane::redefine(PUPlane *this,Vec3 *param_1,Vec3 *param_2)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)this = uVar1;
  fVar2 = (float)Vec3::dot(param_1,param_2);
  *(float *)(this + 0xc) = -fVar2;
  return;
}

