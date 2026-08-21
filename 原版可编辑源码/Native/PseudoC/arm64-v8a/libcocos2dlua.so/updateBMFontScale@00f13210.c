
/* cocos2d::Label::updateBMFontScale() */

void __thiscall cocos2d::Label::updateBMFontScale(Label *this)

{
  int iVar1;
  long lVar2;
  float fVar3;
  
  if (*(int *)(this + 0x308) == 1) {
    iVar1 = FontFNT::getOriginalFontSize(*(FontFNT **)(*(long *)(this + 0x3d0) + 0x80));
    fVar3 = *(float *)(this + 0x67c);
    lVar2 = Director::getInstance();
    fVar3 = (fVar3 * *(float *)(lVar2 + 0x1a0)) / (float)iVar1;
  }
  else {
    fVar3 = 1.0;
  }
  *(float *)(this + 0x680) = fVar3;
  return;
}

