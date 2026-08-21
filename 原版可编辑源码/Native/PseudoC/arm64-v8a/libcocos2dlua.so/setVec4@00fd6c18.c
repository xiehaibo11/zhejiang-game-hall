
/* cocos2d::UniformValue::setVec4(cocos2d::Vec4 const&) */

void __thiscall cocos2d::UniformValue::setVec4(UniformValue *this,Vec4 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x20) = uVar2;
  *(undefined8 *)(this + 0x18) = uVar1;
  return;
}

