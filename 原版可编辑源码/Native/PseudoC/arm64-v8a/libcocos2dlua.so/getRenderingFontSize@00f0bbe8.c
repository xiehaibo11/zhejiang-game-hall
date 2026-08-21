
/* cocos2d::Label::getRenderingFontSize() const */

float __thiscall cocos2d::Label::getRenderingFontSize(Label *this)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(this + 0x308);
  if (iVar1 == 0) {
    lVar2 = (**(code **)(*(long *)this + 0x538))();
    return *(float *)(lVar2 + 0x18);
  }
  if (iVar1 == 3) {
    return *(float *)(this + 0x3b8);
  }
  if (iVar1 == 1) {
    return *(float *)(this + 0x67c);
  }
  if (*(long *)(this + 0x3c0) != 0) {
    return 0.0;
  }
  return *(float *)(this + 0x424) * *(float *)(this + 0x680);
}

