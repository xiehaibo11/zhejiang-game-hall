
/* cocos2d::Label::setDimensions(float, float) */

void __thiscall cocos2d::Label::setDimensions(Label *this,float param_1,float param_2)

{
  float fVar1;
  
  fVar1 = 0.0;
  if (*(int *)(this + 0x684) != 3) {
    fVar1 = param_2;
  }
  if ((fVar1 != *(float *)(this + 0x44c)) || (*(float *)(this + 0x448) != param_1)) {
    *(float *)(this + 0x448) = param_1;
    *(float *)(this + 0x44c) = fVar1;
    *(float *)(this + 0x440) = param_1;
    *(float *)(this + 0x444) = fVar1;
    *(float *)(this + 0x43c) = param_1;
    this[0x30c] = (Label)0x1;
    if ((*(int *)(this + 0x684) == 2) && (0.0 < *(float *)(this + 0x688))) {
      restoreFontSize(this);
      return;
    }
  }
  return;
}

