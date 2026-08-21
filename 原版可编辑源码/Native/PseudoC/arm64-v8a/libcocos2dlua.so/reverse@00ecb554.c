
/* cocos2d::Speed::reverse() const */

void __thiscall cocos2d::Speed::reverse(Speed *this)

{
  ActionInterval *pAVar1;
  
                    /* catch() { ... } // from try @ 00ecb548 with catch @ 00ecb560 */
  if (*(long **)(this + 0x50) != (long *)0x0) {
    pAVar1 = (ActionInterval *)(**(code **)(**(long **)(this + 0x50) + 0x20))();
    create(pAVar1,*(float *)(this + 0x4c));
    return;
  }
  return;
}

