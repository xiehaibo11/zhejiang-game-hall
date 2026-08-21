
/* cocos2d::Vec4::set(cocos2d::Vec4 const&) */

void __thiscall cocos2d::Vec4::set(Vec4 *this,Vec4 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = uVar1;
  return;
}

