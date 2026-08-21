
/* cocos2d::UniformValue::setMat4v(long, cocos2d::Mat4 const*) */

void __thiscall cocos2d::UniformValue::setMat4v(UniformValue *this,long param_1,Mat4 *param_2)

{
  *(Mat4 **)(this + 0x18) = param_2;
  *(int *)(this + 0x20) = (int)param_1;
  *(undefined4 *)(this + 0x10) = 1;
  return;
}

