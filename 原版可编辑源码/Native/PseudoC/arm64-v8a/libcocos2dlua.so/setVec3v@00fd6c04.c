
/* cocos2d::UniformValue::setVec3v(long, cocos2d::Vec3 const*) */

void __thiscall cocos2d::UniformValue::setVec3v(UniformValue *this,long param_1,Vec3 *param_2)

{
  *(Vec3 **)(this + 0x18) = param_2;
  *(int *)(this + 0x20) = (int)param_1;
  *(undefined4 *)(this + 0x10) = 1;
  return;
}

