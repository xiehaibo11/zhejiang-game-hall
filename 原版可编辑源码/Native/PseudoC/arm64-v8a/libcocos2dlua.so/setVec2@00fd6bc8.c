
/* cocos2d::UniformValue::setVec2(cocos2d::Vec2 const&) */

void __thiscall cocos2d::UniformValue::setVec2(UniformValue *this,Vec2 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = uVar1;
  return;
}

