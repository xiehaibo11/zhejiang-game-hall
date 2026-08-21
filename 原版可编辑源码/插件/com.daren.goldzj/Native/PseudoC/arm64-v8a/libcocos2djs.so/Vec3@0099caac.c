
/* cocos2d::Vec3::Vec3(cocos2d::Vec3 const&) */

void __thiscall cocos2d::Vec3::Vec3(Vec3 *this,Vec3 *param_1)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  return;
}

