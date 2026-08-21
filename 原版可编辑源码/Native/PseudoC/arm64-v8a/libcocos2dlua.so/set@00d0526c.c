
/* cocos2d::Ray::set(cocos2d::Vec3 const&, cocos2d::Vec3 const&) */

void __thiscall cocos2d::Ray::set(Ray *this,Vec3 *param_1,Vec3 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)param_1;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)this = uVar2;
  uVar1 = *(undefined4 *)(param_2 + 8);
  *(undefined8 *)(this + 0xc) = *(undefined8 *)param_2;
  *(undefined4 *)(this + 0x14) = uVar1;
  Vec3::normalize((Vec3 *)(this + 0xc));
  return;
}

