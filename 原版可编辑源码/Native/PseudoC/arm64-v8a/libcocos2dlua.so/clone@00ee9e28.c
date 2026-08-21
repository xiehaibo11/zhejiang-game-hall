
/* covariant return thunk to cocos2d::FadeOutUpTiles::clone() const */

long __thiscall cocos2d::FadeOutUpTiles::clone(FadeOutUpTiles *this)

{
  long lVar1;
  long lVar2;
  
  lVar2 = create(*(float *)(this + 0x24),(Size *)(this + 0x30));
                    /* catch() { ... } // from try @ 00ee9de0 with catch @ 00ee9e40 */
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + 0x28;
  }
  return lVar1;
}

