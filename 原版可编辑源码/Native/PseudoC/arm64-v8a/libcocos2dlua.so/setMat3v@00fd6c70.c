
/* cocos2d::UniformValue::setMat3v(long, cocos2d::Mat3 const*) */

void __thiscall cocos2d::UniformValue::setMat3v(UniformValue *this,long param_1,Mat3 *param_2)

{
  *(Mat3 **)(this + 0x18) = param_2;
  *(int *)(this + 0x20) = (int)param_1;
  *(undefined4 *)(this + 0x10) = 1;
  return;
}

