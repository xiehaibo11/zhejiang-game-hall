
/* cocos2d::UniformValue::setVec2v(long, cocos2d::Vec2 const*) */

void __thiscall cocos2d::UniformValue::setVec2v(UniformValue *this,long param_1,Vec2 *param_2)

{
  *(Vec2 **)(this + 0x18) = param_2;
  *(int *)(this + 0x20) = (int)param_1;
  *(undefined4 *)(this + 0x10) = 1;
  return;
}

