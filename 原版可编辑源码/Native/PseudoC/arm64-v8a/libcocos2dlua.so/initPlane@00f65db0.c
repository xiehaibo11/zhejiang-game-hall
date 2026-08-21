
/* cocos2d::Plane::initPlane(cocos2d::Vec3 const&, cocos2d::Vec3 const&) */

void __thiscall cocos2d::Plane::initPlane(Plane *this,Vec3 *param_1,Vec3 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)this = uVar1;
  Vec3::normalize((Vec3 *)this);
  uVar2 = Vec3::dot((Vec3 *)this,param_2);
  *(undefined4 *)(this + 0xc) = uVar2;
  return;
}

