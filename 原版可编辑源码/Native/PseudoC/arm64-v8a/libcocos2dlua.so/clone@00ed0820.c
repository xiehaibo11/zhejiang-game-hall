
/* cocos2d::EaseQuinticActionIn::clone() const */

void __thiscall cocos2d::EaseQuinticActionIn::clone(EaseQuinticActionIn *this)

{
  ActionInterval *pAVar1;
  
                    /* catch() { ... } // from try @ 00ed07c4 with catch @ 00ed0824 */
  if (*(long **)(this + 0x58) != (long *)0x0) {
                    /* catch() { ... } // from try @ 00ed07a8 with catch @ 00ed0834 */
    pAVar1 = (ActionInterval *)(**(code **)(**(long **)(this + 0x58) + 0x18))();
    create(pAVar1);
    return;
  }
  return;
}

