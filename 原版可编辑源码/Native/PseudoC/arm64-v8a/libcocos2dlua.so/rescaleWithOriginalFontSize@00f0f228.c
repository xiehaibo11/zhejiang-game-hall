
/* cocos2d::Label::rescaleWithOriginalFontSize() */

void __thiscall cocos2d::Label::rescaleWithOriginalFontSize(Label *this)

{
  int iVar1;
  long lVar2;
  float fVar3;
  
  iVar1 = *(int *)(this + 0x308);
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
  if (*(float *)(this + 0x688) - fVar3 < 1.0) {
    return;
  }
  scaleFontSizeDown(this,*(float *)(this + 0x688));
  return;
}

