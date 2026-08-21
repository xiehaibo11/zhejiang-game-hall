
/* fairygui::FUILabel::updateBMFontScale() */

void __thiscall fairygui::FUILabel::updateBMFontScale(FUILabel *this)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  if (*(int *)(this + 0x308) == 1) {
    fVar3 = *(float *)(this + 0x67c);
    fVar2 = *(float *)(*(long *)(*(long *)(this + 0x3d0) + 0x80) + 0x24);
    lVar1 = cocos2d::Director::getInstance();
    fVar2 = (fVar3 * *(float *)(lVar1 + 0x1a0)) / (float)(int)fVar2;
  }
  else {
    fVar2 = 1.0;
  }
  *(float *)(this + 0x680) = fVar2;
  return;
}

