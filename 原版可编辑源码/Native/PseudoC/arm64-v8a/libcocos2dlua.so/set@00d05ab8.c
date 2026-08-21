
/* cocos2d::AABB::set(cocos2d::Vec3 const&, cocos2d::Vec3 const&) */

void __thiscall cocos2d::AABB::set(AABB *this,Vec3 *param_1,Vec3 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)this = uVar1;
  uVar1 = *(undefined8 *)param_2;
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_2 + 8);
  *(undefined8 *)(this + 0xc) = uVar1;
  return;
}

