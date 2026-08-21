
/* cocos2d::EaseExponentialOut::clone() const */

void __thiscall cocos2d::EaseExponentialOut::clone(EaseExponentialOut *this)

{
  ActionInterval *pAVar1;
  
  if (*(long **)(this + 0x58) != (long *)0x0) {
    pAVar1 = (ActionInterval *)(**(code **)(**(long **)(this + 0x58) + 0x18))();
                    /* catch() { ... } // from try @ 00ecf110 with catch @ 00ecf0e0 */
    create(pAVar1);
    return;
  }
  return;
}

