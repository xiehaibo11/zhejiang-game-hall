
/* cocos2d::extension::EventAssetsManagerEx::getPercentByFile() const */

float __thiscall
cocos2d::extension::EventAssetsManagerEx::getPercentByFile(EventAssetsManagerEx *this)

{
  int iVar1;
  
  iVar1 = *(int *)(*(long *)(this + 0x10) + 0x1c0);
  return (float)(iVar1 - *(int *)(*(long *)(this + 0x10) + 0x1c4)) / (float)iVar1;
}

