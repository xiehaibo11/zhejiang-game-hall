
/* cocos2d::UniformValue::setVec4v(long, cocos2d::Vec4 const*) */

void __thiscall cocos2d::UniformValue::setVec4v(UniformValue *this,long param_1,Vec4 *param_2)

{
  *(Vec4 **)(this + 0x18) = param_2;
  *(int *)(this + 0x20) = (int)param_1;
  *(undefined4 *)(this + 0x10) = 1;
  return;
}

