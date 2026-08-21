
/* cocos2d::Label::setSystemFontSize(float) */

void __thiscall cocos2d::Label::setSystemFontSize(Label *this,float param_1)

{
  if (*(float *)(this + 0x3b8) != param_1) {
    *(float *)(this + 0x3b8) = param_1;
    *(float *)(this + 0x688) = param_1;
    *(undefined4 *)(this + 0x308) = 3;
    this[0x39c] = (Label)0x1;
  }
  return;
}

