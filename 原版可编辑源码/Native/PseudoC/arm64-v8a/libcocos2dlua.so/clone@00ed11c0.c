
/* cocos2d::EaseCubicActionOut::clone() const */

void __thiscall cocos2d::EaseCubicActionOut::clone(EaseCubicActionOut *this)

{
  ActionInterval *pAVar1;
  
  if (*(long **)(this + 0x58) != (long *)0x0) {
    pAVar1 = (ActionInterval *)(**(code **)(**(long **)(this + 0x58) + 0x18))();
                    /* catch() { ... } // from try @ 00ed0b54 with catch @ 00ed11dc */
    create(pAVar1);
    return;
  }
  return;
}

