
/* cocos2d::EaseQuarticActionOut::clone() const */

void __thiscall cocos2d::EaseQuarticActionOut::clone(EaseQuarticActionOut *this)

{
  ActionInterval *pAVar1;
  
  if (*(long **)(this + 0x58) != (long *)0x0) {
    pAVar1 = (ActionInterval *)(**(code **)(**(long **)(this + 0x58) + 0x18))();
                    /* catch() { ... } // from try @ 00ed05cc with catch @ 00ed057c */
    create(pAVar1);
    return;
  }
  return;
}

