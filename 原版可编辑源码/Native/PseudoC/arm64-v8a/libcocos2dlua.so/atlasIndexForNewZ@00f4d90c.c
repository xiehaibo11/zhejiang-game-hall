
/* cocos2d::TMXLayer::atlasIndexForNewZ(int) */

void __thiscall cocos2d::TMXLayer::atlasIndexForNewZ(TMXLayer *this,int param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  lVar2 = **(long **)(this + 0x3d0);
  if (0 < lVar2) {
    do {
      if ((long)param_1 < *(long *)((*(long **)(this + 0x3d0))[2] + lVar1 * 8)) {
        return;
      }
      lVar1 = lVar1 + 1;
    } while (lVar1 < lVar2);
  }
  return;
}

