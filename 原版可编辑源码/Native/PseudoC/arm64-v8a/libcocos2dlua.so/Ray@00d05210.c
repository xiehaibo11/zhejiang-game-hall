
/* cocos2d::Ray::Ray(cocos2d::Ray const&) */

void __thiscall cocos2d::Ray::Ray(Ray *this,Ray *param_1)

{
  undefined8 uVar1;
  
  Vec3::Vec3((Vec3 *)this);
  Vec3::Vec3((Vec3 *)(this + 0xc));
  uVar1 = *(undefined8 *)param_1;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)this = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined8 *)(this + 0xc) = uVar1;
  Vec3::normalize((Vec3 *)(this + 0xc));
  return;
}

