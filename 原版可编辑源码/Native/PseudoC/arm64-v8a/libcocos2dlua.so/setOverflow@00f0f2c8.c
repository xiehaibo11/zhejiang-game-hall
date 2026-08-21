
/* cocos2d::Label::setOverflow(cocos2d::Label::Overflow) */

void __thiscall cocos2d::Label::setOverflow(Label *this,int param_2)

{
  int iVar1;
  long lVar2;
  float fVar3;
  
  if ((*(int *)(this + 0x684) != param_2) && ((param_2 != 2 || (*(int *)(this + 0x308) != 2)))) {
    if (param_2 == 3) {
      fVar3 = *(float *)(this + 0x440);
      if ((*(float *)(this + 0x44c) != 0.0) || (*(float *)(this + 0x448) != fVar3)) {
        *(float *)(this + 0x448) = fVar3;
        *(undefined4 *)(this + 0x44c) = 0;
        *(undefined4 *)(this + 0x444) = 0;
        *(float *)(this + 0x43c) = fVar3;
        this[0x30c] = (Label)0x1;
        if ((*(int *)(this + 0x684) == 2) && (0.0 < *(float *)(this + 0x688))) {
          restoreFontSize(this);
        }
      }
      if ((this[0x678] != (Label)0x1) && (*(int *)(this + 0x684) != 3)) {
        iVar1 = *(int *)(this + 0x308);
        this[0x678] = (Label)0x1;
        if (iVar1 == 0) {
          lVar2 = (**(code **)(*(long *)this + 0x538))(this);
          fVar3 = *(float *)(lVar2 + 0x18);
        }
        else if (iVar1 == 3) {
          fVar3 = *(float *)(this + 0x3b8);
        }
        else if (iVar1 == 1) {
          fVar3 = *(float *)(this + 0x67c);
        }
        else {
          fVar3 = 0.0;
          if (*(long *)(this + 0x3c0) == 0) {
            fVar3 = *(float *)(this + 0x424) * *(float *)(this + 0x680);
          }
        }
        if (1.0 <= *(float *)(this + 0x688) - fVar3) {
          scaleFontSizeDown(this,*(float *)(this + 0x688));
        }
        this[0x30c] = (Label)0x1;
      }
    }
    iVar1 = *(int *)(this + 0x308);
    *(int *)(this + 0x684) = param_2;
    if (iVar1 == 0) {
      lVar2 = (**(code **)(*(long *)this + 0x538))(this);
      fVar3 = *(float *)(lVar2 + 0x18);
    }
    else if (iVar1 == 3) {
      fVar3 = *(float *)(this + 0x3b8);
    }
    else if (iVar1 == 1) {
      fVar3 = *(float *)(this + 0x67c);
    }
    else {
      fVar3 = 0.0;
      if (*(long *)(this + 0x3c0) == 0) {
        fVar3 = *(float *)(this + 0x424) * *(float *)(this + 0x680);
      }
    }
    if (1.0 <= *(float *)(this + 0x688) - fVar3) {
      scaleFontSizeDown(this,*(float *)(this + 0x688));
    }
    this[0x30c] = (Label)0x1;
  }
  return;
}

