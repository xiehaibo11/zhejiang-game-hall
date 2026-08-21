
/* cocos2d::Label::setLineSpacing(float) */

void __thiscall cocos2d::Label::setLineSpacing(Label *this,float param_1)

{
  if (*(float *)(this + 0x428) != param_1) {
    *(float *)(this + 0x428) = param_1;
    this[0x30c] = (Label)0x1;
  }
  return;
}

