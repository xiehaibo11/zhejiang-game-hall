
/* cocos2d::Director::setContentScaleFactor(float) */

void __thiscall cocos2d::Director::setContentScaleFactor(Director *this,float param_1)

{
  if (*(float *)(this + 0x1a0) != param_1) {
    *(float *)(this + 0x1a0) = param_1;
    this[0x1c0] = (Director)0x1;
  }
  return;
}

