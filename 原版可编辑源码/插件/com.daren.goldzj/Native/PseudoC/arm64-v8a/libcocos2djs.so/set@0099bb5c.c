
/* cocos2d::Quaternion::set(cocos2d::Quaternion const&) */

void __thiscall cocos2d::Quaternion::set(Quaternion *this,Quaternion *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = uVar1;
  return;
}

