
/* cocos2d::UniformValue::setTexture(unsigned int, unsigned int) */

void __thiscall cocos2d::UniformValue::setTexture(UniformValue *this,uint param_1,uint param_2)

{
  *(uint *)(this + 0x18) = param_1;
  *(uint *)(this + 0x1c) = param_2;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  return;
}

