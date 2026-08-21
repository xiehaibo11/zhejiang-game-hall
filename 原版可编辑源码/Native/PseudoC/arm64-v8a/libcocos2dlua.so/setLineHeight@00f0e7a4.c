
/* cocos2d::Label::setLineHeight(float) */

void __thiscall cocos2d::Label::setLineHeight(Label *this,float param_1)

{
  if (*(float *)(this + 0x424) != param_1) {
    *(float *)(this + 0x424) = param_1;
    this[0x30c] = (Label)0x1;
  }
  return;
}

