
/* covariant return thunk to cocos2d::FadeOutTRTiles::clone() const */

long __thiscall cocos2d::FadeOutTRTiles::clone(FadeOutTRTiles *this)

{
  long lVar1;
  long lVar2;
  
  lVar2 = create(*(float *)(this + 0x24),(Size *)(this + 0x30));
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + 0x28;
  }
  return lVar1;
}

