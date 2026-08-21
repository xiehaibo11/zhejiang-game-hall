
/* cocos2d::Label::setMaxLineWidth(float) */

void __thiscall cocos2d::Label::setMaxLineWidth(Label *this,float param_1)

{
  if ((*(float *)(this + 0x448) == 0.0) && (*(float *)(this + 0x43c) != param_1)) {
    *(float *)(this + 0x43c) = param_1;
    this[0x30c] = (Label)0x1;
  }
  return;
}

