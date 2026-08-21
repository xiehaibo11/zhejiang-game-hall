
/* cocos2d::UniformValue::setVec3(cocos2d::Vec3 const&) */

void __thiscall cocos2d::UniformValue::setVec3(UniformValue *this,Vec3 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x20) = uVar1;
  *(undefined8 *)(this + 0x18) = uVar2;
  return;
}

